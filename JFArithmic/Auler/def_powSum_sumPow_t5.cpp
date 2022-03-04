//
//  def_powSum_sumPow_t5.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/1/19.
//

#include "def_powSum_sumPow_t5.hpp"
#include <math.h>

// 计算前100个数的 和的平方 和 平方的和的差值
int  def_powSum_sumPow(){
    int sumPow = pow((1+100)*100/2,2);
    int powSum = 0;
    for(int i=1;i<=100;i++){
        powSum += pow(i, 2);
    }
    return sumPow - powSum;
}
