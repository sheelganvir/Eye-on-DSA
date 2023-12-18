#include <iostream>
#include <string>
using namespace std;

class fruit{
public:
    string name;
    string colour;
};

int main(){
    fruit apple;
    apple.name = "APPLE";
    apple.colour = "Red";
    cout<<apple.name<<" - "<< apple.colour<<endl;
    return 0;
}
