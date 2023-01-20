 #include<iostream>
 #include<stack>
using namespace std;

void solve(stack<int>& s , int x){
    // base case
    if(s.empty()){
        s.push(x);
    }

    int num = s.top();
    s.pop();

    solve(s , x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack , int x){
    solve(myStack , x);
    return myStack;
}

void reverseStack(stack<int>& stack){
    //  base case
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    reverseStack(stack);
    pushAtBottom(stack , num);
}

int main(){
    // Reverse stack using recursion
    /*
    ALGORITHM:-
    - Put stack.top() aside
    - use recursion to reverse the remaining stack
    - after returning insert at bottom (stack.top())
    */
    return 0;
}