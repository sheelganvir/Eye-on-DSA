//Given a boolean 2D array where each row is sorted. Find the roww ith  the maximaum number of 1s
// Finding leftmost one

#include <iostream>
#include <vector>
using namespace std;

int leftMostOneRow(vector<vector<int> > &v){

    int leftMostOne = -1;
    int maxOneRow = -1;
    int j = v[0].size()-1;

    //Finding leftmost one in 0th row
    while(j>=0 && v[0][j]==1){
        leftMostOne = j;
        maxOneRow = 0 ;
        j--;
    }

    //Check in the rest of the the rows if we can find a one left to the leftMostOne 
    for(int i =1 ; i<v.size() ; i++){

        while(j>=0 && v[i][j]==1){
            leftMostOne = j;
            j--;
            maxOneRow =i;
        }
    }
    return maxOneRow;

}

    

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
                    maxOnesRow = i;
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

    int res = leftMostOneRow(vec);
    cout<<res<<endl;
    return 0;
}