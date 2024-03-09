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

    // search opperation
    if(set1.find(4)!=set1.end()){
        cout<<"Value is present"<<endl;
    }else{
        cout<<"Value is not present"<<endl;
    }
    
    return 0;
}