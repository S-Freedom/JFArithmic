//
//  HappyNum_202.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/3.
//

#include "HappyNum_202.hpp"
#include <iostream>
using namespace std;
//编写一个算法来判断一个数 n 是不是快乐数。
//
//「快乐数」 定义为：
//
//对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
//然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
//如果这个过程 结果为 1，那么这个数就是快乐数。
//如果 n 是 快乐数 就返回 true ；不是，则返回 false 。

int getNext(int n){
    
    int result = 0;
    while (n > 1) {
        int m = n%10;
        result += m*m;
        n/=10;
    }
    result += (n*n);
    return result;
}

bool HappyNum_202::isHappy(int n){
    
    if(n == 1) return true;
    int slow = n;
    int fast = n;
    do{
        slow = getNext(slow);
        fast = getNext(getNext(fast));
        cout << slow  << "\t "<< fast<< "\n" <<endl;
    }while(fast!=1 && slow != fast);
    return fast == 1;
}
