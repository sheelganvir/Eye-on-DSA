#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l1 = {1,2,3,4};
    auto itr = l1.begin();
    //l1.end() - iterator pointing to the memory location after 4
    cout<<*itr<<endl;

    auto rev_itr = l1.rbegin();
    cout<<*rev_itr<<endl;
    //l1.rend() - iterator pointing to the memory location after 1

    advance(itr, 2);
    cout<<*itr<<endl;
    return 0; 
}