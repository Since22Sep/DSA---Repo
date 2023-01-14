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

Node* kReverse(Node* head , int k){
    // base case
    if(head == NULL){
        return NULL;
    }

    // step 1: reverse the first k nodes
    Node* next =NULL;
    Node* curr = head;
    Node* prev = NULL;
   
    int count = 0;
    while(curr != NULL && count < k ){
         next = curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
         count ++;
    }
    // step 2: Recursion will handle the rest of the list
    if(next != NULL){
        head->next = kReverse(next , k); /*it will give the head of reversed remaining part*/
    }
    // step 3: return the head of reversed list
    return prev;
}

int main(){
    // Reverse linked list in K group
/*
  TC - O(N)
  SC - O(N)
*/
    return 0;
}