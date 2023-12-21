#include <iostream>
using namespace std;

class A{
public:
    int x;
    A(int y){
        x=y;
    }
    friend void print(A &obj);
};

void print(A &obj){
    cout<<obj.x<<endl;
}

int main(){ 
    A obj(5);
    cout<<obj.x<<endl;
    return 0;
}