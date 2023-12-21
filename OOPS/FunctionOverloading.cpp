#include <iostream>
using namespace std;

class Sum{
public:
    void add(int x, int y){
        int sum = x+y;
        cout<< sum <<endl;
    }
    void add(int x, int y, int z){
        int sum = x+y+z;
        cout<< sum<<endl;
    }
    void add(float x, float y){
        float sum = x+y;
        cout<<sum<<endl;
    }
};

int main(){
    Sum s;
    s.add(2,5);
    s.add(10,20,60);   
    s.add(float(2.588),float(8.999));
    //compile time function overloading
    return 0;
}