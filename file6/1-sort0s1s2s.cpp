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

// Approach 1:-
Node* sortList(Node* head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }

    // now traverse the list and replace the data
    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount !=0){
            temp->data = 2;
            twoCount --;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    // Sort 0s 1s and 2s in linked list
    /*
    Approach 1:- We count the number of times the element is occuring and replacing the data
    TC- O(n)
    SC- O(1)
    */
    return 0;
}