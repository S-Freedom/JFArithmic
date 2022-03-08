//
//  DeleteDuplicateNode_82.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/5.
//

#include "DeleteDuplicateNode_82.hpp"

ListNode *DeleteDuplicateNode_82::deleteDuplicates(ListNode *head){
    
    /**
     遍历链表，记录当前节点值，和上一个节点的值，如果当前节点的值等于下一节点的值，标记将当前节点指向前一节点，并继续遍历，直到和当前节点不一致，
     将当前节点指向前一节点,并将当前节点的next指向head
     */
    if(head == nullptr) return head;
    // 1  2  3  3  4  4  5
    ListNode dummyNode = ListNode(-1);
    dummyNode.next = head;
    ListNode *curNode = head;
    ListNode *preNode = head;
    ListNode *pNode = head;
    bool flag = false;
    while (head && head->next) {
        head = head->next;
        if(curNode->val == head->val && !flag){
            flag = true;
        }else if(curNode->val != head->val && flag){
            flag = false;
            curNode = preNode;
        }else{
            preNode = curNode;
            curNode = head;
            pNode->next = preNode;
        }
    }
    return dummyNode.next;
}
