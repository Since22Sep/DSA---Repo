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

// finding length and checking the position

int getLength(Node* head){
    int length = 0;
    while(head != NULL){
        length++;
        head = head->next;
    }
    return length;
}

Node* findMiddle(Node* head){
    int len = getLength(head);
    int ans = (len/2);  /*this will give exact node of middle element*/

    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp->next;
        cnt ++;
    }return temp;
}

// Optimized Solution 
Node* getMiddle(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    // 2 nodes
    if(head->next->next == NULL){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }return slow;
}

int main(){
    
    return 0;
}