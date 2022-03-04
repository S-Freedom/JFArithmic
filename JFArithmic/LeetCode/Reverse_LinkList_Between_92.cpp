//
//  Reverse_LinkList_Between_92.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/3.
//

#include "Reverse_LinkList_Between_92.hpp"

//给你单链表的头指针 head 和两个整数 left 和 right ，其中 left <= right 。请你反转从位置 left 到位置 right 的链表节点，返回 反转后的链表 。

ListNode* Reverse_LinkList_Between_92::reverseBetween(ListNode* head, int left, int right){
    
    if(head ==nullptr || head->next == nullptr) return nullptr;
    
    ListNode *newHead = nullptr;
    int l = 0;
    ListNode *preNode = nullptr;
    while (l<left) {
        l++;
        head = head->next;
    }
    preNode = head;
    while (head!=nullptr && l<right) {
        ListNode *temp = head->next;
        head->next = newHead;
        newHead = head;
        head = temp;
        l++;
    }
    preNode->next = newHead;
    return preNode;
}
