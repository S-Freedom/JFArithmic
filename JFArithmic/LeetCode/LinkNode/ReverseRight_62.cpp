//
//  ReverseRight_62.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/5.
//

#include "ReverseRight_62.hpp"

//61. 旋转链表
//给你一个链表的头节点 head ，旋转链表，将链表每个节点向右移动 k 个位置。
//https://leetcode-cn.com/problems/rotate-list/

ListNode *ReverseRight_62::rotateRight(ListNode *head, int k){
    if(head == nullptr || head->next == nullptr || k == 0) return head;
    
    /**
     找到链表最后一个位置，将链表收尾相连，再将第len-K个节点的前一个节点断开，即可
     */
    ListNode *dummyNode = head;
    int len = 1;
    while(dummyNode->next) {
        dummyNode = dummyNode->next;
        len++;
    }
    k = k%len;
    k = len-k;
    dummyNode->next = head;
//    head = head->next;
    while (k--) {
        dummyNode = dummyNode->next;
    }
    head = dummyNode->next;
    dummyNode->next = nullptr;
    return head;
}
