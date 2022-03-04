//
//  141_hasCycle.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/3.
//

#include "LinkHasCycle_141.hpp"


/**
 给你一个链表的头节点 head ，判断链表中是否有环。
 如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。
 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
 注意：pos 不作为参数进行传递 。仅仅是为了标识链表的实际情况。
 如果链表中存在环 ，则返回 true 。 否则，返回 false 。
 */

LinkHasCycle_141::LinkHasCycle_141(){
    
}

bool LinkHasCycle_141::hasCycle(ListNode *head) {
    
    if(head == nullptr) return false;
    
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}