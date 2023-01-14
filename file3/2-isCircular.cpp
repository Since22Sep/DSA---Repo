 #include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = data;
        this->next = next;
    }
};

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

int main(){
     // Linked List is circular or not
/*
   - a linked list is said to be circular if it has no node having its next pointer equal to NULL and all the nodes form a circle.
   - an empty linked list will also be considered a circular
   - all the integers in the linked list are unique

    TC - O(n)
    SC -O(1)

*/
    return 0;
}