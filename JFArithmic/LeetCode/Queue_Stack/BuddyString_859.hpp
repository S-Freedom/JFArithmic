//
//  BuddyString_859.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/8.
//

#ifndef BuddyString_859_hpp
#define BuddyString_859_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace::std;
class BuddyString_859 {
    
//    给你两个字符串 s 和 goal ，只要我们可以通过交换 s 中的两个字母得到与 goal 相等的结果，就返回 true ；否则返回 false 。
//    交换字母的定义是：取两个下标 i 和 j （下标从 0 开始）且满足 i != j ，接着交换 s[i] 和 s[j] 处的字符。
//    例如，在 "abcd" 中交换下标 0 和下标 2 的元素可以生成 "cbad" 。
//    链接：https://leetcode-cn.com/problems/buddy-strings
    
public:
    bool buddyStrings(string s, string goal) {
        
        /**
            判断s和goal的字符串度是否相等，如果不等，则不是亲密字符串
            遍历s和goal两个字符串，如果s[i]和goal[i] 不等，则记第一处不等，s[j] 和goal[j]不等记为第二处不等，
         判断s[first] == goal[second] 且 s[second]==goal[first]，则说明是亲密字符串，否则不是
         值得注意的是：若两个字符串完全相等，不一定是亲密字符串，必须交换才行，
         所以，若两个字符串完全相等，判断是否有某个字符的出现频率大于1，若有大于1的，则交换就必定是亲密字符串
         */
        
        if(s.size() != goal.size()) return false;
        
        if(s == goal){
            
            vector<int> arr(26);
            for(int i=0;i<s.size();i++){
                
                arr[s[i] - 'a']++;
                if(arr[s[i] - 'a'] > 1){
                    return true;
                }
                // 判断是否是字母
            }
            return false;
        }else{
            int first = -1, second=-1;
            for(int i =0;i<s.size();i++){
                if(s[i] != goal[i]){
                    if(first == -1){
                        first = i;
                    }else if(second == -1){
                        second = i;
                    }else{
                        return false;
                    }
                }
            }
            if(second  != -1 && s[first] == goal[second] && s[second] == goal[first])
                return true;
            else
                return false;
        }
        return true;
    }
};
#endif /* BuddyString_859_hpp */
