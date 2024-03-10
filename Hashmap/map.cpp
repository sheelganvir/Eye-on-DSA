#include <iostream>
#include <map>
using namespace std;

int main(){
    
    map<string,int> directory;

    //Insertion in map
    directory["Sejal"] = 8871;
    directory["Sheel"] = 8817;
    directory["Anjali"] =  9563;

    //Printing in map
    for(auto ele:directory){
        cout<<"Name: "<<ele.first<<endl;
        cout<<"Phone: "<<ele.second<<endl;
    }cout<<endl;

    directory["Sheel"] = 9893;  //Only value will be updated, no duplicate key will be formed
    directory.insert(make_pair("Sejal",9991));  //insert function cannot update the value

    for(auto ele:directory){
        cout<<"Name: "<<ele.first<<endl;
        cout<<"Phone: "<<ele.second<<endl;
    }cout<<endl;

    return 0;
}