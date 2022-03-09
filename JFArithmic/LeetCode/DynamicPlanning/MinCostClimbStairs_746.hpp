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
#include <algorithm>
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
     10 15 20
     */
public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        if(cost.size() == 1) return cost[0];
//        int pre=0,curr=0;
//        for(int i=2;i<=cost.size();i++){
//            int next = min(curr+cost[i-1], pre+cost[i-2]);
//            pre = curr;
//            curr = next;
//        }
//        return curr;
//    }
    
    int minCostClimbingStairs_dynamic(vector<int>& cost) {
        if(cost.size() == 1) return cost[0];
        unsigned long n = cost.size();
        vector<int> dp(n+1);
        dp[0]=dp[1]=0;
        for(int i = 2; i<=n; i++){
            dp[i] = min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
        }
        return dp[n];
    }
};
#endif /* MinCostClimbStairs_746_hpp */
