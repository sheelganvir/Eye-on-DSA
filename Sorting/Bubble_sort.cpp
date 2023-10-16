/* BUBBLE SORT ALGORITHM : repeatedly swap two adjacent elemsnts if in wrong orders

Time Complexity : O(n^2)
Space Complexity : O(1)

Bubble sort is stable because order of elements with the same value are not disturbed*/

#include <iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v){
    bool flag = false;
    int n = v.size();
    for (int i=0 ;i<n-1; i++){
        for(int j=0 ; j< n-i-1 ; j++){
            if(v[j]>v[j+1]){
                flag= true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
    }
    return;
}

int main(){
    
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n ; i++){
        cin>>v[i];
    }

    bubbleSort(v);

    for(int i=0; i<n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}