//
//  DeleteDuplicateNode_83.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/5.
//

#include "DeleteDuplicateNode_83.hpp"
//给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表
//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/


ListNode *DeleteDuplicateNode_83::deleteDuplicates(ListNode *head){
    
    /**
     遍历链表，判断下一个链表是否和本节点的值相当，若相等，继续比较下一个元素，知道不相等，将本节点的next指向该元素
     */
    
    if(head == nullptr || head->next == nullptr) return head;
    ListNode dummyNode = ListNode(-1);
    dummyNode.next = head;
    ListNode *tempNode = head;
    ListNode *p = head;
    while (head && head->next) {
        head = head->next;
        if(tempNode->val == head->val){
            if(head->next == nullptr){
                p->next = nullptr;
                return dummyNode.next;
            }
            continue;
        }else{
            tempNode = head;
            p->next = head;
            p = p->next;
        }
    }
    return dummyNode.next;
}
