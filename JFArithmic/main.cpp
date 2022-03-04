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

using namespace std;
void testEuler();

bool cmp(const int &a, const int &b){
    return a < b;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    ListNode head3 = ListNode(3);
    ListNode head2 = ListNode(2);
    ListNode head0 = ListNode(0);
    ListNode head4 = ListNode(4);
    ListNode head1 = ListNode(1);
    head0.next = &head1;
    head1.next = &head2;
    head2.next = &head3;
    head3.next = &head4;
    
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
    
    Reverse_LinkList_Between_92 reverseList_Bt_92 = Reverse_LinkList_Between_92();
    ListNode *head = reverseList_Bt_92.reverseBetween(&head0, 1, 3);
    while (head) {
        cout << head->val << endl;
        head = head->next;
    }
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
