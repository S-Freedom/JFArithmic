//
//  Circular_Queue_622.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/7.
//

#ifndef Circular_Queue_622_hpp
#define Circular_Queue_622_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace::std;

class Circular_Queue_622 {
private:
    vector<int> arr;
    int head,tail;
    int count;
public:
    Circular_Queue_622(int k);
    bool enQueue(int value);
        
    bool deQueue();
        
    int Front();
        
    int Rear();
        
    bool isEmpty();
        
    bool isFull();
    
    
    
};
#endif /* Circular_Queue_622_hpp */
