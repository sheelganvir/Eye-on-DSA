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

int main(){

    child1 c1;    
    child2 c2;
    return 0;
} 