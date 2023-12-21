#include <iostream>
using namespace std;

class  Parent1{
public:
    Parent1(){
        cout << "Parent1 Constructor Called" << endl;
    }
};

class  Parent2{
public:
    Parent2(){
        cout << "Parent2 Constructor Called" << endl;
    }
};

class child: public Parent1, public Parent2{
public:
    child(){
        cout << "Child Constructor Called" << endl;
    }
};

int main(){

    child c;    
    return 0;
} 