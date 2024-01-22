#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& v) {
    int n = v.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1)
                v[i]++;
            if(v[i] == 10){
                v[i] = 0;
                if(i != 0){
                    v[i-1]++;
                }
                else{
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
    return v;

}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(9);
    int n=v.size();
    for(int i =0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    plusOne(v);
    for(int i =0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}