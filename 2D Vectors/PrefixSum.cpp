//Given a matrix "a" of dimension nxm and 2 coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2)

#include <iostream>
#include <vector>
using namespace std;

int rectangleSum(vector<vector<int> > &matrix, int l1 , int r1 , int l2, int r2 ){

    int sum = 0 ;
    for(int i=l1 ; i<=l2; i++){
        for(int j=r1 ;j<=r2 ; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}
int main(){
    int n ,m;
    cout<<"Enter order of matrix : "<<endl;
    cin>>n>>m;
    vector<vector<int> > matrix(n, vector<int>(m));

    cout<<"Enter matrix : "<< endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>matrix[i][j];
        }
    }

    int l1,l2,r1,r2;
    cout<<"Enter coordinates : "<< endl;
    cin>>l1>>r1>>l2>>r2;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    int sum = rectangleSum(matrix,l1,r1,l2,r2);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}