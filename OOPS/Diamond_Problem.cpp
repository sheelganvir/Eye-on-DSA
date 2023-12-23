#include <iostream>
using namespace std;

class  Parent{
public:
    Parent(){
        cout << "Parent Constructor Called" << endl;
    }
};

class child1: public Parent{
public:
    child1(){
        cout << "Child1 Constructor Called" << endl;
    }
};

class child2: public Parent{
public:
    child2(){
        cout << "Child2 Constructor Called" << endl;
    }
};

class GrandChild: public child1, public child2{
public:
    GrandChild(){
        cout << "Grand  Child Constructor Called" << endl;
    }
};

int main(){
 
    GrandChild c;
    return 0;
} 