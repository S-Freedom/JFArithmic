//
//  Reverse_Link_GroupK_25.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/4.
//

#include "Reverse_Link_GroupK_25.hpp"
#include <utility>
using namespace::std;
/**
 给你一个链表，每 k 个节点一组进行翻转，请你返回翻转后的链表。
 k 是一个正整数，它的值小于或等于链表的长度。
 如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序。
 进阶：
 你可以设计一个只使用常数额外空间的算法来解决此问题吗？
 你不能只是单纯的改变节点内部的值，而是需要实际进行节点交换。
 链接：https://leetcode-cn.com/problems/reverse-nodes-in-k-group
 */

pair<ListNode*, ListNode*>reverseGetHeadtail(ListNode *head){
    ListNode *newHead = nullptr;
    ListNode *tail = head;
    while (newHead) {
        ListNode *tempNode = head->next;
        head->next = newHead;
        newHead = head;
        head = tempNode;
    }
    return {newHead,tail};
}

ListNode* Reverse_Link_GroupK_25::reverseKGroup(ListNode *head, int k){
    /**
     先遍历链表的长度，将K整除，得到需要反转多少组链表,并将各个组的翻转前的头节点记录住(翻转后的尾结点)
     将每个链表进行反转
     将各个反转之后的链表进行拼接，上一组的头结点拼接下一组的尾结点
     */
    if(head == nullptr || head->next == nullptr) return nullptr;
    
    ListNode dummyNode = ListNode(-1);
    dummyNode.next = head;
    ListNode *preNode = &dummyNode;
    while (head) {
        ListNode *tail = preNode;
        for(int i=0;i<k;i++){
            tail = tail->next;
            if(!tail){
                return dummyNode.next;
            }
            ListNode *next = tail->next;
            pair<ListNode *, ListNode *> result = reverseGetHeadtail(tail);
            head = result.first;
            tail = result.second;
            
            preNode->next = result.first;
            tail->next = next;
            preNode = tail;
            head = tail->next;
        }
    }
    return dummyNode.next;
}



