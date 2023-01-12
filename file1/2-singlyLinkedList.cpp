#include<iostream>
using namespace std;

// node implementation
class Node{
    public:
    int data;
    Node* next;

    // whenever a new node is created then constructor will be called there you will pull data 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head , int d){
    // here we have taken the reference because i dont want to create a copy , i want to change in my original linked list

    // create a linked list that has to be inserted at head
    Node* temp = new Node(d);

    // naye wale node ka jo next hai usko purane wale node ke head k equal kra do
    temp->next = head;

    // new head will be temp
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    // create a new node that has to be inserted at tail
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head , Node* &tail , int position , int d ){
    if(position == 1){
        insertAtHead(head , d);
        return;
    }

    // now we will traverse
    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail , d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    // jis node ko insert krna hai uske next ko uske aage wale node se point kra do aur jo aage wala node hai uska address temp me hai...
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int position , Node* &head , Node* &tail){
    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // free the memory of start node
        temp->next = NULL; // so that it doesn't give segmentation fault
        delete temp;
    }
    else{
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        // code to update the tail
        if(curr->next == NULL){
            tail = prev;
        }
       
            prev->next = curr->next;
            curr->next = NULL;
        delete curr;
    }
}

// function to traverse a linked list
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main(){
    // created a new object i.e new node 
    /*
     Node* node1 = new Node(10) ;
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    */
   // create a new node
    Node* node1 = new Node(10);

    // head pointed to node1
    // when there will be a single node , then you will call same node as head and tail
  
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head , 12);
    print(head);

    insertAtTail(tail , 25);
    print(head);
 
    insertAtPosition(head ,tail, 3, 22);
   print(head);

//    to check whether the tail or head is updated or not


 deleteNode(4 , head , tail);
   print(head);

cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->next<<endl;

    return 0;
}