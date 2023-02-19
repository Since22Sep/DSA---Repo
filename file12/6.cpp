 #include<iostream>
 #include<stack>
using namespace std;

void sortedInsert(stack<int> & stack , int num){
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }
    int n = stack.top();
    sortedInsert(stack , num);
    stack.push(n);
}

void sortStack(stack<int>& stack){
    // base case
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);
    // while returning insert the popped elements in the sorted way.
    sortedInsert(stack , num);

}

int main(){
    // sort a stack
    /*
    - stack may contains duplicate integer
    - use of any loop is not allowed
    - stack may contain any integer
    */
    return 0;
}