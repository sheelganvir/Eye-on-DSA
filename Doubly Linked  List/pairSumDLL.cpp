/*
    Given the head of a doubly linked list. The values of the linked list are sorted in
    non-decreasing order. Find if there exists a pair of distinct nodes such that the sum of
    their values is Х. Return the pair in the form of a vector [I, г], where I and r are the
    values stored in the 2 nodes pointed by the pointers. If there are multiple such pairs,
    return any of them. If there is no such pair return [-1, -1].

*/

/*
    Given the head of doubly linked list , delete the node whose
    neighbours have the same value. Traverse the list from right to left.
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

    
};

vector<int> pairSumDLL(Node* head, Node* tail, int x){

    vector<int> ans(2,-1);
    while(head!=tail){
        int sum = head->val + tail->val;
        if(sum==x){
            ans[0] = head->val;
            ans[1] = tail->val;
            return ans;
        }

        if(sum>x){  // I need smaller values, I wil move tail back
            tail=tail->prev;
        }
        else{   // I need bigger values, I will move forward
            head=head->next;
        }
    }
    return ans;
    
}

int main(){
    
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(4);
    dll.insertAtEnd(6);
    dll.insertAtEnd(7);
    dll.insertAtEnd(9);
    dll.insertAtEnd(10);
    dll.display();

    vector<int>ans = pairSumDLL(dll.head, dll.tail, 11);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    

    return 0;
}