//
//  Auler2.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/1/19.
//

#include "fibo_sum_even_t2.hpp"

int fibo_sum_even(int max){
    
    int result = 0;
    
    int first = 1;
    int second = 2;
    while (second < 4000000){
        if(second % 2 == 0){
            result += second;
        }
        second = first + second;
        first = second - first;
    }
    return result;
}
