 #include<iostream>
 #include<stack>
using namespace std;

class Stack{
    // properties
    public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int [size];
        top = -1;
    }

    int push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    int pop(){
        if(top >= 0){
            top --;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};

// Stack implementation using Linked List
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = next;
    }
};

class Stack1{
    public:
    int size;
    Node* head;
    
    Stack1(int size){
        this->size = size;
        this->head = NULL;
    }

    void push(int data){
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL){
            temp =temp->next;
            cnt++;
        }
        if(cnt < size){
            // insert at Head
            Node* newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return;
            }
            else{
                newNode->next = head;
                head = newNode;
            }
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void peek(){
        if(head == NULL){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<head->data<<endl;
        }
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack is Underflow"<<endl;
        }
        else{
            Node* temp = head;
            cout<<"Popped element is "<<temp->data<<endl;
            head = head->next;
            delete temp;
        }
    }

    bool isEmpty(){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }
    
    cout<<"size of stack is "<<s.size()<<endl;


    return 0;
}