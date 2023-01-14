 #include<iostream>
 #include<map>
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

bool detectLoop(Node* head){
    // for empty list
    if(head == NULL){
        return false;
    }
    Node* temp = head;
    map<Node* , bool> visited;

    while(temp != NULL){

        // if cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
    }
    return false;

}

int main(){
    // T.C = O(N)
    // S.C = O(N)
    return 0;
}