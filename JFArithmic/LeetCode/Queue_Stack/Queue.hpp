//
//  Queue.hpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/7.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace::std;
class Queue {

private:
    vector<int> arr;
    int head,tail;
public:
    Queue(int n);
    bool pop();
    bool push(int x);
    bool isEmpty();
    bool isFull();
    int output();
};
#endif /* Queue_hpp */
