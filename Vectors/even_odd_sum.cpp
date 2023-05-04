#include <iostream>
#include <vector>
using namespace std;

int main(){
    int array[]={1,2,1,2,1,2};

    //ans= -1+2-1+2-1+2 

    int ans = 0;
    for(int i=0 ; i<6 ; i++){
        if(i%2==0){
            ans+=array[i];
        }
        else{
            ans-=array[i];
        }
    }cout << ans << endl;
    return 0;
}