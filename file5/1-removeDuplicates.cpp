 #include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = next;
    }
};

Node* uniqueSortedList(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        if(curr->next != NULL && curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

int main(){
    // Remove duplicates from sorted linked list
    return 0;
}