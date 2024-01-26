#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l1 = {1,2,3,4};
    for(auto itr = l1.begin(); itr!=l1.end() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;


    auto itr = l1.begin();    
    advance(itr, 2);
    l1.insert(itr,5);

    for(auto itr = l1.begin(); itr!=l1.end() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;


    //insert 6 three times
    l1.insert(itr,3,6);
    
    for(auto itr = l1.begin(); itr!=l1.end() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    

    //insert section of the list
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r,2);   // now r is pointing to 3
    l1.insert(itr,l,r);
    //it will insert 1, 2
    for(auto itr = l1.begin(); itr!=l1.end() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    return 0; 
}