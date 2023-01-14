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

/*
Approach 2:-
We created a map , so that we can keep the track which is visited and which is not. If we have reached a node which is marked true, then it is circular Linked List. if we reached NULL then it is not a circular linked list.
Space will be increased in this case.
T.C = O(n)
S.C = O(n)
*/
    return 0;
}