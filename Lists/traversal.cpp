#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l1 = {1,2,3,4};
    
    for(auto num: l1){
        cout<<num<<endl;
    }
    return 0; 
}