#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    double dec = 9.8;
    int *ptr = &x;
    double *ptrd = &dec;

    cout << "Size of x : " << sizeof(x) << endl;
    cout << "Size of dec : " << sizeof(dec) << endl;

    cout << ptr << " " << (ptr + 1) << endl;
    cout << ptrd << " " << (ptrd + 1) << " " << (ptrd + 3) << " " << (ptrd - 1) << endl;
    return 0;
}