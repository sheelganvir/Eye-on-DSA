#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> set1;

    // Insertion is a set
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
    set1.insert(5);
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    // Deleteing elements from a set from value

    set1.erase(4);
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    // Deleteing elements from a set from position
    auto itr = set1.begin();
    advance(itr,3);   // Moves the iterator to point to the 4th position
    set1.erase(itr);

    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;
 
    set1.insert(4);
    set1.insert(5);
    set1.insert(6);
    set1.insert(7);
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    // Deleteing elements from a set in range
    auto start_itr = set1.begin();
    start_itr++; 
    auto end_itr = set1.begin();
    advance(end_itr,3);
    set1.erase(start_itr,end_itr);

    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;
    return 0;
}