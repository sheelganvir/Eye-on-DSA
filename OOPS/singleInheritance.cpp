#include <iostream>
using namespace std;

class  Parent{
public:
    Parent(){
        cout << "Parent Constructor Called" << endl;
    }
};

class child: public Parent{
public:
    child(){
        cout << "Child Constructor Called" << endl;
    }
};

int main(){
    child c;    
    return 0;
}