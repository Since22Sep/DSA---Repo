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

int main(){
    // insert an element at its bottom in a given stack
    return 0;
}