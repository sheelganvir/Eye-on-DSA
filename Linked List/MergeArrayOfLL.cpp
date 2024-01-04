/*
    You are gien an array of k linked lists, each linked list is sorted in ascending
    order. Merge all the linked lists into one sorted linked list and return it.
*/

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    bool visited;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }

        Node *temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;
    }

    void display(){ 
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        } 
        cout << "NULL"<<endl;
    }
};

Node* mergeLinkedLists(Node* &head1, Node* &head2){

    Node* dummyHeadNode = new Node(-1);

    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyHeadNode;

    while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    // If any of the linked list is still not empty then add it to the end
    if(ptr1){
        ptr3->next = ptr1;
    }
    else{
        ptr3->next = ptr2;
    }
    return dummyHeadNode->next;
}

Node* mergeKLinkedList(vector<Node*> &lists){
    while(lists.size()>1){
        Node* mergedHead = mergeLinkedLists(lists[0],lists[1]);
        lists.push_back(mergedHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
}

//vector -> head1, head2, head3, head4
//1. head1 and head2 ll will be merged
//vector -> head3 head4 mergedhead1_2
//2. head3 and head4 will be merged
//vector -> mergedhead1_2 mergedhead3_4
//3. mergedhead1_2 and mergedhead3_4 will be merged
// vector -> mergedhead1_2_3_4


int main(){
    
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(26);
    ll1.insertAtTail(48); 
    ll1.insertAtTail(555); 
    ll1.insertAtTail(699); 


    LinkedList ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(20);
    ll2.insertAtTail(50);
    ll2.insertAtTail(100);
    ll2.insertAtTail(200);
    ll2.insertAtTail(2000);
 
    
    ll1.display();  
    ll2.display();    

    LinkedList ll3;
    ll3.head = mergeLinkedLists(ll1.head,ll2.head);
    cout<<"Merged Linked List: "<<endl;
    ll3.display();
    
    return 0;
}