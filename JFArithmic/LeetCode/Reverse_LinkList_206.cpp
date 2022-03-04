//
//  Reverse_LinkList_206.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/3.
//

#include "Reverse_LinkList_206.hpp"

ListNode* Reverse_LinkList_206::reverseList(ListNode *head){
    
    if(head == nullptr) return nullptr;
    
    ListNode *pre = nullptr;
    ListNode *cur = head;
    ListNode *next = head->next;
    while (next != nullptr) {
        cur->next = pre;
        pre = cur;
        cur = next;
        next = next->next;
    }
    cur->next = pre;
    return cur;
}

ListNode* Reverse_LinkList_206::reverseList2(ListNode *head){
    
    if(head == nullptr || head->next == nullptr) return nullptr;
    ListNode *newHead = nullptr;
    while (head!=nullptr) {
        ListNode *temp = head->next;
        head->next = newHead;
        newHead = head;
        head = temp;
    }
    return newHead;
}

// 递归调用
ListNode* Reverse_LinkList_206::reverseList_rec(ListNode *head){
    
    if(head == nullptr || head->next == nullptr) return head;
    
    ListNode *tail = head->next;
    ListNode *ret = reverseList(head->next);
    head->next = tail->next;
    tail->next = head;
    return ret;
}
