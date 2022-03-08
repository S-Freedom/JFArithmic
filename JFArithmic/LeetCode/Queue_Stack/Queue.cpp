//
//  Queue.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/7.
//

#include "Queue.hpp"

Queue::Queue(int n):arr(n),head(0),tail(0){}

bool Queue::push(int x){
    
    if(isFull()){
        return false;
    }
    arr[tail++] = x;
    cout << "push:" << x << endl;
    return true;
}

bool Queue::pop(){
    if(isEmpty()) return false;
    int r = arr[head++];
    cout << "pop:" << r << endl;
    return true;
}
bool Queue::isEmpty(){
    return arr.size() == 0;
}

bool Queue::isFull(){
    return tail > arr.size() -1;
}

int Queue::output(){
    
    for(int i=head;i<tail;i++){
        cout << arr[i] << "";
    }
    cout << endl;
    return 0;
}
