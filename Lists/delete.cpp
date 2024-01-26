#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l1 = {1,2,3,4};
    
    for(auto itr = l1.begin(); itr!=l1.end() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    //reverse traversal
    for(auto itr = l1.rbegin(); itr!=l1.rend() ; itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    return 0; 
}