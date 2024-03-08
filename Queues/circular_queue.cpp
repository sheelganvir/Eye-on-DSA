/*
    CIRCULAR QUEUE
*/

#include <iostream>
#include <vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int> v;
    int currSize;
    int totalSize;
public:
    Queue(int n){
        v.resize(n);
        this->totalSize = n;
        this->back = n-1;
        this->front = 0;
        this->currSize = 0;
    }

    void enqueue(int data){
        if(isFull()) return;
        this->back = (this->back+1) % this->totalSize;
        this->v[this->back] = data;
        this->currSize++;
    }

    void dequeue(){
        if(isEmpty()) return;
        this->front = (this->front + 1) % this->totalSize;
        this->currSize--;
    }

    int getFront(){
        if(this->front == -1) return -1;
        return v[this->front];
    }

    bool isEmpty(){
        return this->currSize== 0;
    }

    bool isFull(){
        return this->currSize == this->totalSize;
    }
};

int main(){
    Queue qu(4);
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(80);
    qu.enqueue(70);
    qu.enqueue(40);
    qu.dequeue();
    qu.enqueue(50);

    while(not qu.isEmpty()){
        cout<<qu.getFront()<<" ";
        qu.dequeue();
    }
    return 0;
}