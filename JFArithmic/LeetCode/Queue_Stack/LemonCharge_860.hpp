//
//  LemonCharge_860.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/8.
//

#ifndef LemonCharge_860_hpp
#define LemonCharge_860_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace::std;

//在柠檬水摊上，每一杯柠檬水的售价为 5 美元。顾客排队购买你的产品，（按账单 bills 支付的顺序）一次购买一杯。
//每位顾客只买一杯柠檬水，然后向你付 5 美元、10 美元或 20 美元。你必须给每个顾客正确找零，也就是说净交易是每位顾客向你支付 5 美元。
//注意，一开始你手头没有任何零钱。
//给你一个整数数组 bills ，其中 bills[i] 是第 i 位顾客付的账。如果你能给每位顾客正确找零，返回 true ，否则返回 false 。
//链接：https://leetcode-cn.com/problems/lemonade-change
class LemonCharge_860 {
public:
    /**
     定义三个变量，记录5、10、20美元的个数
     从大往小开始找零，如果零钱不够找，则返回false
            如果可以将bills数组里的找完，则返回true.
     */
    bool lemonadeChange(vector<int>& bills) {

        if(bills.size() == 0) return true;
        int count5=0, count10 = 0, count20=0;
        for(int i=0;i<bills.size();i++){
            int r =bills[i];
            if(r == 20) {
                count20++;
                if(count10>0 && count5 >0){
                    count10--;
                    count5--;
                }else if(count5>=3){
                    count5-=3;
                }else{
                    cout << "零钱不够了"<< endl;
                    return false;
                }
            }else if(r == 10) {
                count10++;
                if(count5>0){
                    count5--;
                }else{
                    cout << "零钱不够了"<< endl;
                    return false;
                }
            }else if(r == 5){
                count5++;
            }
            cout<< "收取了"<<r<<"元买了一杯柠檬水，剩余"<<count5<<"张5元，"<<count10<<"张10元，"<<count20<<"张20元" <<endl;
        }
        
        return true;
    }
};
#endif /* LemonCharge_860_hpp */
