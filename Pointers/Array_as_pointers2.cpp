#include <iostream>
using namespace std;

int main()
{
    int a[3] = {11, 12, 13};
    int(*p)[3] = &a;
    cout << p << " " << a << " " << *p << " " << *a << endl;
    return 0;
}