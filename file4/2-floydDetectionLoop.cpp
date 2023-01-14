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

Node* floydDetectionLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetectionLoop(head); 
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    // if(startOfLoop == NULL){
    //     return NULL;
    // }
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next =NULL;
}
int main(){
    /*
    1- FOR DETECTION OF LOOP :- in starting keep slow and fast here at head, slow will take one step and fast will take 2.
    after every iteration distance between fast and slow decreases by one 
    */
    return 0;
}