//
//  LinkDetectCycle_142.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/3.
//

#include "LinkDetectCycle_142.hpp"

/**
 给定一个链表的头节点  head ，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
 如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。
 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
 如果 pos 是 -1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
 不允许修改 链表。
 */

LinkDetectCycle_142::LinkDetectCycle_142(){}
ListNode* LinkDetectCycle_142::detectCycle(ListNode *head){
    
    /**
     1.使用两个指针（快指针走两步，慢指针走一步，）当快慢指针相遇时，fast指针从head开始走
           2. 次吃fast和slow都各走一步，当fast指针和slow指针相遇时，就是第一个循环的节点
     */
    if(head == nullptr) return nullptr;
    ListNode *slow = head;
    ListNode *fast = head;
    while (true) {
        if(fast == nullptr || fast->next == nullptr) return nullptr;
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            fast = head;
            break;
        }
    }
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
