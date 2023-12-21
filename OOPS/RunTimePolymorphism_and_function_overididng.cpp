#include <iostream>
using namespace std;

class Parent{
public:
    virtual void print(){   //using virtual keyword for function overiding to decide at run time which function is getting called
        cout << "Parent Class" << endl;
    }
    void show(){
        cout << "Show Function in the parent class" << endl;
    }
};

class Child : public Parent {
public:
    void print(){
        cout << "Child Class" << endl;
    }
    void show(){
        cout << "Overridden Show Function in child class" << endl;
    }
};

int main(){
    
    Parent *p;
    Child c;

    p=&c;
    p->print();
    p->show();
    return 0;
}