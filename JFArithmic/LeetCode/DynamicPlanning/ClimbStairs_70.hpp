//
//  ClimeStairs_70.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/9.
//

#ifndef ClimbStairs_70_hpp
#define ClimbStairs_70_hpp

#include <stdio.h>

//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
//https://leetcode-cn.com/problems/climbing-stairs/
//1 2 3 4 5 6 7 8 9 10
//1 2 3 5
class ClimbStairs_70{
public:
    int climbStairs(int n) {
        //1 2 3 4 5 6 7 8 9 10
        //1 2 3 5 8
        if(n<=3) return n;
        int first=1,second=2,idx=2;
        while (idx<n) {
            second = first+ second;
            first = second - first;
            idx++;
        }
        return second;
    }
};
#endif /* ClimeStairs_70_hpp */
