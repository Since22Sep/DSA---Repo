 #include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }cout<<"Memory is free for node with data|"<<value<<endl;
    }
};

void insertNode(Node* &tail, int element , int d){
    //  Assuming that the element is present in the list according to this element we will place our new data

    // for empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else{
        // non empty linked list
        // assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        // here the element is found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
          
    }
}

// Do while ki ek characteristics hoti hai ki wo atleast ek baar to execute hota hi hai... then single element will also be printed.
void print(Node* tail){
    Node* temp = tail;
    // empty list

    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail , int value){
    // empty list
    if(tail == NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        // non empty 
        // assuming that the value is present in the linked list

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node linked list
        if(curr == prev){
            tail = NULL;
        }
        //  >=2 Node linked list

       if(tail == curr){
        tail = prev;
       } 
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    // In a circular linked list, last node rather than pointing to null is pointing to first node.
    // no need to create head , can use head and tail by tail pointer only

    Node* tail = NULL;

    // empty list me insert kr rhe hai
    insertNode(tail , 5 , 3);
    print(tail);

    insertNode(tail, 3, 5);
   print(tail);

   insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);
    
    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail , 3);
    print(tail);
    return 0;
}