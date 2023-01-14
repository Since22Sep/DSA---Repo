 #include<iostream>
 #include<map>
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

Node* removeDuplicates(Node* head){
    Node* curr = head;
    Node* prev = NULL;

    if(head == NULL){
        return NULL;
    }
    map<int,int> visited;
    while(curr != NULL){
       if(!visited[curr->data]){
        visited[curr->data] = 1;
        prev =curr;
        curr =curr->next;
       }
       else{
        Node* nextNode = curr->next;
        prev->next = nextNode;
        delete(curr);
        curr = nextNode;
       }
    }
}

int main(){
    
    return 0;
}