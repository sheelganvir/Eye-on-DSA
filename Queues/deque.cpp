/*
    Deque -> Deque stands for double ended queue

    In deque we can add or remove an element from anywhere in the queue
*/

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(0);
    dq.push_front(50);
    while(not dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    return 0;
}