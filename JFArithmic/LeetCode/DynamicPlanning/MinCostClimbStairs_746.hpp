//
//  MinCostClimbStairs_746.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/9.
//

#ifndef MinCostClimbStairs_746_hpp
#define MinCostClimbStairs_746_hpp

#include <stdio.h>
#include <vector>
using namespace::std;

//给你一个整数数组 cost ，其中 cost[i] 是从楼梯第 i 个台阶向上爬需要支付的费用。一旦你支付此费用，即可选择向上爬一个或者两个台阶。
//
//你可以选择从下标为 0 或下标为 1 的台阶开始爬楼梯。
//
//请你计算并返回达到楼梯顶部的最低花费。
//
//链接：https://leetcode-cn.com/problems/min-cost-climbing-stairs

class MinCostClimbStairs_746 {
    
    /**
     先取前两个值的最小值作为首元素。
     在判断下两个值的最小值进行跳转，
        记录花费，直到跳到楼梯顶部
     */
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        return 1;
    }
};
#endif /* MinCostClimbStairs_746_hpp */
