//
//  Circular_Queue_622.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/7.
//

#include "Circular_Queue_622.hpp"

//设计你的循环队列实现。 循环队列是一种线性数据结构，其操作表现基于 FIFO（先进先出）原则并且队尾被连接在队首之后以形成一个循环。它也被称为“环形缓冲器”。
//循环队列的一个好处是我们可以利用这个队列之前用过的空间。在一个普通队列里，一旦一个队列满了，我们就不能插入下一个元素，即使在队列前面仍有空间。但是使用循环队列，我们能使用这些空间去存储新的值。

//你的实现应该支持如下操作：
//Circular_Queue_622(k): 构造器，设置队列长度为 k 。
//Front: 从队首获取元素。如果队列为空，返回 -1 。
//Rear: 获取队尾元素。如果队列为空，返回 -1 。
//enQueue(value): 向循环队列插入一个元素。如果成功插入则返回真。
//deQueue(): 从循环队列中删除一个元素。如果成功删除则返回真。
//isEmpty(): 检查循环队列是否为空。
//isFull(): 检查循环队列是否已满。
//链接：https://leetcode-cn.com/problems/design-circular-queue

Circular_Queue_622::Circular_Queue_622(int k):arr(k),head(0),tail(0),count(0){
}

bool Circular_Queue_622::enQueue(int value) {

    if(isFull()) return false;
    
    arr[tail++] = value;
    count++;
    tail = (tail + arr.size()) % arr.size();
    return true;
}

bool Circular_Queue_622::deQueue() {
    if(isEmpty()) return false;
    int value = arr[head++];
    count--;
    head = head % arr.size();
    return true;
}

int Circular_Queue_622::Front() {
    if(isEmpty()) return -1;
    int value = arr[head];
    
    return value;
}

int Circular_Queue_622::Rear() {
    if(isEmpty()) return -1;
    int real_tail = (tail -1 + arr.size()) % arr.size();
    int value = arr[real_tail];
    
    return value;
}

bool Circular_Queue_622::isEmpty() {
    if(count == 0) {
        
        return true;
    }
    return false;
}

bool Circular_Queue_622::isFull() {
    if(count == arr.size()){
        
        return true;
    }
    return false;
}

