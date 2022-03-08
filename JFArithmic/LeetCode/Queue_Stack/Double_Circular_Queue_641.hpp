//
//  Double_Circular_Queue_641.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/7.
//

#ifndef Double_Circular_Queue_641_hpp
#define Double_Circular_Queue_641_hpp

#include <stdio.h>
#include <vector>

using namespace::std;
class Double_Circular_Queue_641 {
    
    //设计实现双端队列。
    //
    //实现 MyCircularDeque 类:
    //
    //MyCircularDeque(int k) ：构造函数,双端队列最大为 k 。
    //boolean insertFront()：将一个元素添加到双端队列头部。 如果操作成功返回 true ，否则返回 false 。
    //boolean insertLast() ：将一个元素添加到双端队列尾部。如果操作成功返回 true ，否则返回 false 。
    //boolean deleteFront() ：从双端队列头部删除一个元素。 如果操作成功返回 true ，否则返回 false 。
    //boolean deleteLast() ：从双端队列尾部删除一个元素。如果操作成功返回 true ，否则返回 false 。
    //int getFront() )：从双端队列头部获得一个元素。如果双端队列为空，返回 -1 。
    //int getRear() ：获得双端队列的最后一个元素。 如果双端队列为空，返回 -1 。
    //boolean isEmpty() ：若双端队列为空，则返回 true ，否则返回 false  。
    //boolean isFull() ：若双端队列满了，则返回 true ，否则返回 false 。
    //
    //链接：https://leetcode-cn.com/problems/design-circular-deque
private:
    vector<int> arr;
    int head,tail,totalCount;
public:
    Double_Circular_Queue_641(int k):arr(k+1),head(0),tail(0),totalCount(k+1) {
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        
        head = (head -1 + totalCount) % totalCount;
        arr[head] = value;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        arr[tail] = value;
        tail = (tail + 1) % totalCount;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        
        head = (head+1) % totalCount;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        
        tail = (tail-1 + totalCount) %totalCount;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return arr[head];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        tail = (tail -1 + totalCount) % totalCount;
        return arr[tail];
    }
    
    bool isEmpty() {
        return head == tail;
    }
    
    bool isFull() {
        return (tail+1) % totalCount == head;
    }
};
#endif /* Double_Circular_Queue_641_hpp */
