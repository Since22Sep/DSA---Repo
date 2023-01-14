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

//  Approach 2:-

void insertAtTail(Node* &tail, Node* &curr){
    tail->next = curr;
    tail = curr;
}
Node* sortingList(Node* head){
    // creating 3 dummy list
    Node * zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

//    create separate list for 0s 1s and 2s
   while(curr != NULL){
    int value = curr->data;
    if(value == 0){
        insertAtTail(zeroTail , curr);
    }
    else if(value == 1){
        insertAtTail(oneTail , curr);
    }
    else if(value == 2){
        insertAtTail(twoTail , curr);
    }
    curr =curr->next;
   }

//    merge all three list
    if(oneHead->next != NULL){
        // 1s list is not empty
        zeroTail->next = oneHead->next;
    }
    else{
        // 1s list is empty
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail-> next = NULL;

    // head setup
    head = zeroHead->next;

    // delete all 3 dummy list
    delete zeroHead;
    delete oneHead;
    delete twoHead;

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