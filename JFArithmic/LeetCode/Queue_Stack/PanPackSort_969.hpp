//
//  PanPackSort_969.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/8.
//

#ifndef PanPackSort_969_hpp
#define PanPackSort_969_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace::std;
//给你一个整数数组 arr ，请使用 煎饼翻转 完成对数组的排序。
//一次煎饼翻转的执行过程如下：
//选择一个整数 k ，1 <= k <= arr.length
//反转子数组 arr[0...k-1]（下标从 0 开始）
//例如，arr = [3,2,1,4] ，选择 k = 3 进行一次煎饼翻转，反转子数组 [3,2,1] ，得到 arr = [1,2,3,4] 。
//以数组形式返回能使 arr 有序的煎饼翻转操作所对应的 k 值序列。任何将数组排序且翻转次数在 10 * arr.length 范围内的有效答案都将被判断为正确。
//链接：https://leetcode-cn.com/problems/pancake-sorting

class PanPackSort_969{
    void reverse(vector<int> &arr, int n, vector<int> &idx){
        for(int i=0,j=n-1;i<j;i++,j--){
            swap(arr[i], arr[j]);
            idx[arr[i]] = i;
            idx[arr[j]] = j;
        }
    }
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> idx(arr.size()+1);
        vector<int> ret;
        // 将arr数组反向索引，以便于找到具体值的具体位置
        for(int i=0;i<arr.size();i++){
            idx[arr[i]] = i;
        }
        for(int i=arr.size();i>=1;i--){
            if(idx[i] != 0){
                ret.push_back(idx[i]+1);
                reverse(arr, idx[i]+1, idx);
            }
            if(i != 1){
                ret.push_back(i);
                reverse(arr, i, idx);
            }
        }
        return ret;
    }
};
#endif /* PanPackSort_969_hpp */
