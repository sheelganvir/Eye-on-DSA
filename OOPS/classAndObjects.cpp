#include <iostream>
#include <string>
using namespace std;

class fruit{
public:
    string name;
    string color;
};

int main(){
    fruit apple;
    apple.name = "APPLE";
    apple.color = "Red";
    cout<<apple.name<<" - "<< apple.color<<endl;

    //Same thing with object pointer
    fruit *mango = new fruit();
    mango->name = "mango";
    mango->color = "yellow";
    cout << mango->name << " is " << mango->color << endl;
    
    return 0;
}

