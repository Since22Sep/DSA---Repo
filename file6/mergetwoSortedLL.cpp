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

Node* solve(Node* first , Node* second){

    // if only one element is present in first list
    if(first->next == NULL){
        first->next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = first->next;
    Node* curr2 = second;
    Node* next2 = second->next;

      // add nodes between first list
    while(next1 != NULL && curr2 != NULL){
        if((curr2->data >= curr1->data )&& (curr2->data <= next1->data)){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
        }
      // updating pointers
        curr1 = curr2;
        curr2 = next2;
    }

    if(curr1->next == NULL){
        curr1->next = second;
        return first;
    }

}

Node* sortTwoList(Node* first , Node* second){
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }
    if(first->data <= second->data){
        solve(first , second);
    }
    else{
        solve(second, first);
    }
    
}

int main(){
    // Merge two Sorted Linked List
    return 0;
}