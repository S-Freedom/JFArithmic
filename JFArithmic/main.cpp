//
//  main.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/1/18.
//

#include <iostream>
#include "muti3Or5_t1.hpp"
#include "fibo_sum_even_t2.hpp"
#include "plalindrome_max_t3.hpp"
#include <math.h>
#include "def_powSum_sumPow_t5.hpp"
#include "Largest_product_t8.hpp"
#include <algorithm>
#include "CommonDataStruct.h"
#include "LinkHasCycle_141.hpp"
#include "LinkDetectCycle_142.hpp"
#include "HappyNum_202.hpp"
#include "Reverse_LinkList_206.hpp"
#include "Reverse_LinkList_Between_92.hpp"
#include "ReverseRight_62.hpp"
#include "DeleteDuplicateNode_83.hpp"
#include "DeleteDuplicateNode_82.hpp"
#include "Queue.hpp"
#include "Circular_Queue_622.hpp"
#include "Double_Circular_Queue_641.hpp"

using namespace std;
void testEuler();

bool cmp(const int &a, const int &b){
    return a < b;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    ListNode head0 = ListNode(1);
    ListNode head1 = ListNode(2);
    ListNode head2 = ListNode(3);
    ListNode head3 = ListNode(3);
    ListNode head4 = ListNode(4);
    ListNode head5 = ListNode(4);
    ListNode head6 = ListNode(5);
    
    head0.next = &head1;
    head1.next = &head2;
    head2.next = &head3;
    head3.next = &head4;
    head4.next = &head5;
    head5.next = &head6;
    
    // 判断链表是否有环
//    LinkHasCycle_141 hasCycle_141 = LinkHasCycle_141();
//    bool hasCycle = hasCycle_141.hasCycle(&head3);
//    cout << hasCycle  << "\n" << endl;
//
    // 获取第一个环的位置
//    LinkDetectCycle_142 detchCycle_142 = LinkDetectCycle_142();
//    ListNode *detchNode = detchCycle_142.detectCycle(&head3);
//    cout << detchNode << endl;
    
    // 是否是快乐数
//    HappyNum_202 happyNum_202 = HappyNum_202();
//    bool isHappy = happyNum_202.isHappy(12453453);
//    cout << "result: " << isHappy;
    
//    Reverse_LinkList_206 reverseLinkList_206 = Reverse_LinkList_206();
//    ListNode *head = reverseLinkList_206.reverseList2(&head0);
    
//    Reverse_LinkList_Between_92 reverseList_Bt_92 = Reverse_LinkList_Between_92();
//    ListNode *head = reverseList_Bt_92.reverseBetween(&head0, 1, 3);
//    ReverseRight_62 reverseRight_62 = ReverseRight_62();
//    ListNode *head = reverseRight_62.rotateRight(&head0, 2);
    
    
//    DeleteDuplicateNode_83 test_83 = DeleteDuplicateNode_83();
//    ListNode *head = test_83.deleteDuplicates(&head0);
//    DeleteDuplicateNode_82 test_82 = DeleteDuplicateNode_82();
//    ListNode *head = test_82.deleteDuplicates(&head0);
//    while (head) {
//        cout << head->val << endl;
//        head = head->next;
//    }
    
//    Queue queue = Queue(5);
//    queue.push(1);
//    queue.push(2);
//    queue.push(3);
//    queue.pop();
//    queue.push(4);
//    queue.pop();
//    queue.push(5);
//    queue.output();
    
//    Circular_Queue_622 circularQueue = Circular_Queue_622(3); // 设置长度为 3
//    circularQueue.enQueue(1);// 返回 true
//    circularQueue.enQueue(2);// 返回 true
//    circularQueue.enQueue(3);// 返回 true
//    circularQueue.enQueue(4);// 返回 false，队列已满
//    circularQueue.Rear(); // 返回 3
//    circularQueue.isFull();  // 返回 true
//    circularQueue.deQueue();  // 返回 true
//    circularQueue.enQueue(4);  // 返回 true
//    circularQueue.Rear();  // 返回 4
    
    Double_Circular_Queue_641 test_641 = Double_Circular_Queue_641(3);
    bool param_1 = test_641.insertLast(1);
    bool param_2 = test_641.insertLast(2);
    bool param_3 = test_641.insertFront(3);
    bool param_4 = test_641.insertFront(4);
    int param_5 = test_641.getRear();
    bool param_6 = test_641.isFull();
    bool param_7 = test_641.deleteLast();
    bool param_8 = test_641.insertFront(4);
    int param_9 = test_641.getFront();
    
//    circularDeque.insertLast(1);                    // 返回 true
//    circularDeque.insertLast(2);                    // 返回 true
//    circularDeque.insertFront(3);                    // 返回 true
//    circularDeque.insertFront(4);                    // 已经满了，返回 false
//    circularDeque.getRear();                  // 返回 2
//    circularDeque.isFull();                        // 返回 true
//    circularDeque.deleteLast();                    // 返回 true
//    circularDeque.insertFront(4);                    // 返回 true
//    circularDeque.getFront();                // 返回 4
    
    
    cout << param_1 << " ," << param_2 << ", " << param_3 << ", "  << param_4 << ", "  << param_5 << ", "  <<param_6 << ", "  <<  param_7 << ", "  << param_8 << ", " <<param_9 << endl;
    return 0;
}

void testEuler(){
    //    int result1 = _multuply3or5();
    //    cout <<"Auler_t1 result = " << result1 << endl;
    //
    //    int result2 = fibo_sum_even(4000000);
    //    cout <<"Auler_t2 result = " << result2 << endl;
    //
    //    int result3 = getMaxPlalindrome(4);
    //    cout <<"Auler_t3 result = " << result3 << endl;
    //
    //    int result5 = def_powSum_sumPow();
    //    cout <<"Auler_t5 result = " << result5 << endl;
    //
    //    int result8 = largest_product();
    //    cout <<"Auler_t8 result = " << result8 << endl;
}
