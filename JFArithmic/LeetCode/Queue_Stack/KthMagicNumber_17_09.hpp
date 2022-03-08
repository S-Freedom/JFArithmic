//
//  KthMagicNumber_17_09.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/8.
//

#ifndef KthMagicNumber_17_09_hpp
#define KthMagicNumber_17_09_hpp

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace::std;

//有些数的素因子只有 3，5，7，请设计一个算法找出第 k 个数。注意，不是必须有这些素因子，而是必须不包含其他的素因子。
//例如，前几个数按顺序应该是 1，3，5，7，9，15，21。
//链接：https://leetcode-cn.com/problems/get-kth-magic-number-lcci


class KthMagicNumber_17_09 {

public:
    int getKthMagicNumber(int k){
        
        if(k == 1) return 1;
        
        int idx3=0,idx5=0,idx7=0;
        int arr[k+1];
        memset(arr, 0, sizeof(arr));
        arr[0]=1;
        for(int i =1;i<k;i++){
            
            arr[i] = min(min(arr[idx3]*3, arr[idx5]*5), arr[idx7]*7);
            if(arr[i] == arr[idx3]*3) idx3++;
            if(arr[i] == arr[idx5]*5) idx5++;
            if(arr[i] == arr[idx7]*7) idx7++;
            
            cout << arr[i] << endl;
        }
        return arr[k-1];
    }
};

#endif /* KthMagicNumber_17_09_hpp */
