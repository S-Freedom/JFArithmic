//
//  plalindrome_max_t3.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/1/19.
//

#include "plalindrome_max_t3.hpp"
#include <iostream>
#include <math.h>

using namespace std;
// 判断一个数字是否是回文数字
bool isPlalindrome(int x){
    
    int ans = x;
    int temp = 0;
    // 12345 54321
    while (x) {
        temp = temp*10 + x%10;
        x /= 10;
    }
    return ans == temp;
}

/**
 判断两个三位数相乘的最大回文数字
 params digitCount ： 两个digitCount位数的乘积
 */
int getMaxPlalindrome(int digitCount){
    int result = 0;
    for(int i = pow(10, digitCount-1); i<pow(10, digitCount); i++){
        for(int j = i; j<pow(10, digitCount); j++){
            if(isPlalindrome(i*j)){
                result = max(result, i * j);
            }
        }
    }
    
    return result;
}
