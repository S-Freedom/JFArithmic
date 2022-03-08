//
//  Reverse_LinkList_Between_92.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/3.
//

#include "Reverse_LinkList_Between_92.hpp"

//给你单链表的头指针 head 和两个整数 left 和 right ，其中 left <= right 。请你反转从位置 left 到位置 right 的链表节点，返回 反转后的链表 。

ListNode *reverseNode(ListNode *head){
    ListNode *newHead = nullptr;
    while (head!=nullptr) {
        ListNode *temp = head->next;
        head->next = newHead;
        newHead = head;
        head = temp;
    }
    return newHead;
}


ListNode* Reverse_LinkList_Between_92::reverseBetween(ListNode* head, int left, int right){
    
    /**
        创建一个虚拟头节点，防止多余的判断（从头反转，不从头反转等）
        先找到需要反转的前一个元素preNode
        在找到需要反转的最后一个节点rightNode
        preNode->next为开始反转的第一个节点
        curNode为rightNode的下一个元素
        将leftNode到rightNode的元素进行反转
        拼接起来，preNode->next = rightNode, leftNode->next = cur
     */
    if(head ==nullptr || head->next == nullptr) return head;
    
    ListNode dummyNode = ListNode(-1);
    dummyNode.next = head;
    ListNode *preNode = &dummyNode;
    for(int i =0;i<left-1;i++) {
        preNode = preNode->next;
    }
    ListNode *rightNode = preNode;
    for(int i = 0;i<right-left+1;i++){
        rightNode = rightNode->next;
    }
    ListNode *leftNode = preNode->next;
    ListNode *curNode = rightNode->next;
    
    preNode->next = nullptr;
    rightNode->next = nullptr;
    
    reverseNode(leftNode);
    
    preNode->next = rightNode;
    leftNode->next = curNode;
    
    return dummyNode.next;
}
