#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> set1;

    // Insertion is a set
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
    set1.insert(5);
    
    cout<<set1.size()<<endl; // 3
    set1.insert(2);
    cout<<set1.size()<<endl; // 3, because it does not allow duplicate elements

    //traversal in a set using for loop
    unordered_set<int>::iterator itr;
    for(itr=set1.begin(); itr!=set1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;

    //traversal in a set using for each loop
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    // Deleteing elemets from a set
    
    return 0;
}