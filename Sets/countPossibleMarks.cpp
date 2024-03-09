/*
    Given the number of questions as n, and the marks for the correct answer as p and q marks
    for the incorrect answer. One can either attempt to solve the question in an examination
    and get either p maarks if the answer is right or q marks if the answer is wrong, or leave 
    the question unattempted and get 0 marks. The task is to find the count of all the different 
    possible marks that one can score in the examination.

    Input: n=2 , p=1 , q=-1
    Output: 5
    Explanation : The different possible marks are : -2, -1, 0, 1,  2
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int n,p,q;
    cin>>n>>p>>q;
    unordered_set<int> s;

    for(int i=0 ; i<=n ;i++){
        for(int j=0 ; j<=n ;j++){

            int correct = i;
            int incorrect = j;
            int unattempted = n-(i+j);

            if(unattempted>=0){
                int score = correct*p + incorrect*q;
                s.insert(score);
            }else{
                break;
            }
        }
    }
    cout<<"Ans: "<<s.size()<<endl;
    return 0;
}