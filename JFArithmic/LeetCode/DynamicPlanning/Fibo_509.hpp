//
//  Fibo_509.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/8.
//

#ifndef Fibo_509_hpp
#define Fibo_509_hpp

#include <stdio.h>

class Fibo_509{
    
//    斐波那契数 （通常用 F(n) 表示）形成的序列称为 斐波那契数列 。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：
//    F(0) = 0，F(1) = 1
//    F(n) = F(n - 1) + F(n - 2)，其中 n > 1
//    https://leetcode-cn.com/problems/fibonacci-number/
public:
    int fib(int n) {

        if(n == 0 || n == 1) return n;
        
        int first=1,second=1,idx=2;
        while (idx<=n) {
            second = first+second;
            first = second - first;
            idx++;
        }
        return first;
    }
};
#endif /* Fibo_509_hpp */
