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

    
    // for(auto ele:directory){
    //     cout<<"Name: "<<ele.first<<endl;
    //     cout<<"Phone: "<<ele.second<<endl;
    // }cout<<endl;

    map<string,int>::iterator itr;
    for(itr= directory.begin() ; itr!=directory.end() ; itr++){
        cout<<itr->first<<" - "<<itr->second<<endl;
    }cout<<endl;

    /* reverse iterator to iterate through the elements in reverse order. */
    map<string,int>::reverse_iterator itr1;
    for(itr1= directory.rbegin() ; itr1!=directory.rend() ; itr1++){
        cout<<itr1->first<<" - "<<itr1->second<<endl;
    }
    return 0;
}