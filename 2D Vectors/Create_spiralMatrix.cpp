//Given a positive integer n, generate an nxn matrix filled with elements from 1 to n^2 in spiral order

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > createSpiralMatrix(int n ){

    vector<vector<int > > matrix(n, vector<int> (n));

    
    int left = 0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;

    int direction = 0;
    int value = 1;

    while (left<=right && top<=bottom)
    {
        // left-->right 
        if(direction==0){
            for(int i=left ; i<=right ; i++){
                matrix[top][i]=value++;
            }
            top++;
        }
        //top-->bottom
        else if(direction==1){
            for(int j=top ; j<=bottom ; j++){
                matrix[j][right]=value++;
            }
            right--;
        }
        //right-->left
        else if(direction==2){
            for(int i=right; i>=left ; i--){
                matrix[bottom][i]=value++;
            }
            bottom--;
        }
        //bottom-->top
        //direction==3
        else{
            for(int i=bottom ; i>=top ; i--){
                matrix[i][left]=value++;           
            }
            left++;
        }
        direction = (direction + 1)%4;  //0 , 1, 2 , 3 
        
    }
    return matrix;
}
int main(){
    
    int n;
    cin>> n;
    
    vector<vector<int> > matrix(n, vector<int>(n));

    matrix= createSpiralMatrix(n);
    for(int i = 0; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}