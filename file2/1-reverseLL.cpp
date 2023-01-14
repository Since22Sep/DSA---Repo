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

Node* reverseLlinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }return prev;
}

// Recursive Solution
void reverse(Node* &head, Node* &curr, Node* &prev){
    // base case
    if(curr ==NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head , forward , curr);
    curr->next = prev;
}

int main(){
    // Reverse a Linked List
    return 0;
}