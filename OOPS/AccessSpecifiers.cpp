#include <bits/stdc++.h>
using namespace std;

class parent{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class Child1: public parent{
    //x will remain public
    //y will remain protected
    //z will be inaccessible
};

class Child2: protected parent{
    //x will be protected
    //y will be protected
    //z will be inaccessible

};

class Child3: private parent{
    //x will be private
    //y will be private
    //z will be inaccessible
};

int main(){
    parent p;
    p.x;    
    return 0;
}