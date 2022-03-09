//
//  FiboNth_1137.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/8.
//

#ifndef FiboNth_1137_hpp
#define FiboNth_1137_hpp

#include <stdio.h>

class FiboNth_1137{
//    泰波那契序列 Tn 定义如下：
//    T0 = 0, T1 = 1, T2 = 1, 且在 n >= 0 的条件下 Tn+3 = Tn + Tn+1 + Tn+2
//
//    给你整数 n，请返回第 n 个泰波那契数 Tn 的值。
//    链接：https://leetcode-cn.com/problems/n-th-tribonacci-number
public:
    int tribonacci(int n) {
        
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 1;
        
        int p=0,q=0,r=1,s=1;
        // 1 1 2 4 7
        for(int i =3;i<=n;i++) {
            p=q;
            q=r;
            r=s;
            s=p+q+r;
        }
        
        return s;
    }
    
};
#endif /* FiboNth_1137_hpp */
