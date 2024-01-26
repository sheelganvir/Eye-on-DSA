#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l1 = {1,2,3,4};
    auto itr = l1.begin();
    cout<<*itr<<endl;
    return 0;
}