#include <iostream>
#include <vector>

//sorted -> elements arranged in ascending order

using namespace std;

int main(){
    int array[]={1,2,3,4,5,6};

    bool sortedflag=true;
    for(int i=1;i<6;i++){
        if(array[i]<=array[i-1]){
            sortedflag=false;
        }
    }cout << sortedflag << endl;
    return 0;
}