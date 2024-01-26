#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l1 = {1,2,3,4,5,6};
    
    for(auto itr = l1.begin(); itr!=l1.end() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    auto s_itr = l1.begin();
    advance(s_itr,2);   //s_itr pointing to the 3rd element

    auto e_itr = l1.begin();
    advance(e_itr,4);   // e_itr pointing to the 5th element

    l1.erase(s_itr,e_itr);
    for(auto itr = l1.begin(); itr!=l1.end() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    return 0; 
}