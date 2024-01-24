/*
    A critical point in a linked list is defined as either a local maxima or a local minima.
    Given a linked list tail, return an array of length 2 containing [minDistance,
    maxDistance] where minDistance is the minimum distance between any two distinct
    critical points and maxDistance is the maximum distance between any two distinct
    critical points. If there are fewer than two critical points, return [-1,-1].
    Note that a node can only be a local maxima/minima if there exists both a previous
    node and a next node.

*/

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int val;
    Node* prev;
    Node* next;
    
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }cout<<endl;
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        return;
    }

    bool isCriticalPoint(Node* &currNode){
        if (currNode->prev == NULL || currNode->next == NULL) {
        // The current node is the first or last node in the linked list
        return false;
        }
        if(currNode->prev->val < currNode->val && currNode->next->val < currNode->val){  //local maxima
            return true;
        }
        if(currNode->prev->val > currNode->val && currNode->next->val > currNode->val){  //local minima
            return true;
        }
        return false;
    }

    vector<int> distBetweenCriticalPoints(Node* tail){
        
        vector<int> ans(2,INT16_MAX);
        int firstCP = -1, lastCP = -1;

        Node* currNode = tail->prev;
        if(currNode == NULL){
            ans[0]=ans[1]=-1;
            return ans;
        }

        int currPos = 0;
        while(currNode->prev!=NULL){
            if(isCriticalPoint(currNode)){
                if(firstCP == -1){
                    firstCP = lastCP = currPos;
                }
                else{
                    ans[0] = min(ans[0], currPos-lastCP);   //min distance
                    ans[1] = currPos - firstCP; //max distance
                    lastCP = currPos;
                }
            }
            currPos++;
            currNode = currNode->next;
        }

        if(ans[0] == INT16_MAX){
            ans[0]=ans[1]=-1;
        }
        return ans;
    }
};

int main(){
    
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(5);
    dll.insertAtEnd(2);
    dll.insertAtEnd(6);
    dll.insertAtEnd(3);
    
    dll.display();

    vector<int>ans = dll.distBetweenCriticalPoints(dll.tail);
    cout<<ans[0]<<ans[1]<<endl;

    return 0;
}