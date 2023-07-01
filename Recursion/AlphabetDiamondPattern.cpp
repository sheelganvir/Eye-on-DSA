#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    //loop to print the upper triangle
    
    for(int line=1; line<=n; line++){
        
        // below loop is to print spaces in each line
    
        int spaces = n-line;
        for(int k=0;k<spaces;k++){
        cout << " ";
        }
       
        // below loop is to print char in each line
        
        int character = 2*line-1;
        for(int j=0; j<character; j++){
            char ch = (char)('A'+j);
            cout << ch;
        }
        
        cout << endl;
    }
        
        // loop to print the lower triangle
        
    for(int line =n+1 ; line<=2*n-1 ;line++){
            
        int no_of_spaces=line-n;
        for(int k=0; k<no_of_spaces;k++){
            cout << " ";
        }
            
        int no_of_char =2*(2*n-line)-1;
        for(int j=0; j<no_of_char;j++){
            char ch = (char)('A'+j);
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}