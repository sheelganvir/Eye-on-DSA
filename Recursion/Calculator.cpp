#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two integers: "<< endl;
    cin >> n1 >> n2;
    
    
    cout<< "Enter an operator(+,-,*,/,%): "<<endl;
    char op;
    cin >> op;
    
    switch (op){
        case '+':
            cout<<"Sum is : "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Difference is : "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Product is : "<<n1*n2<<endl;
            break;
        case '/':
            cout<<"Division is : "<<n1/n2<<endl;
            break;
        case '%':
            cout<<"Remainder is "<<n1%n2<<endl;
            break;
        default:
            cout<<"Enter a valid operator"<<endl;
            break;
    }
    return 0;
}