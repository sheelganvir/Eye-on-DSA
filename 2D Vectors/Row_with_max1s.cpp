//Given a boolean 2D array where each row is sorted. Find the roww ith  the maximaum number of 1s

#include <iostream>
#include <vector>
using namespace std;

int maximumOnesRow(vector<vector<int> >&v){
    
    int maxOnes=INT16_MIN;
    int maxOnesRow = -1;
    int columns = v[0].size();
    for(int i=0 ; i<v.size() ; i++){
        for(int j=0 ; j<v[i].size() ; j++){
            if(v[i][j]==1){
                int numberOfOnes = columns - j;
                if(numberOfOnes > maxOnes){
                    maxOnes = numberOfOnes;
                    maxOnesRow = 1;
                }
                break;
            }
        }
    }
    return maxOnesRow;

}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int> >vec(n,vector<int> (m));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>vec[i][j];
        }
    }

    int res = maximumOnesRow(vec);
    cout<<res<<endl;
    return 0;
}