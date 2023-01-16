 #include<iostream>
using namespace std;

class TwoStack{
public:
int * arr;
int top1;
int top2;
int size;

// Initialize TwoStack,
TwoStack(int s){
    this->size = s;
    top1 = -1;
    top2 = s;
    arr = new int[s];
}

int push1(int num){
    if(top2 - top1 > 1){
        // atleast a empty space is present
        top1 ++;
        arr[top1] = num;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}

int push2(int num){
    if(top2 - top1 > 1){
        top2--;
        arr[top2] = num;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}

int pop1(){
    if(top1 >= 0){
        int ans = arr[top1];
        top1--;
        return ans;
    }
    else{
        return -1;
    }
}

int pop2(){
    if(top2 < size){
        int ans = arr[top2];
        top2++;
        return ans;
    }
    else{
        return -1;
    }
}

};

int main(){
    // Design a data Structure which represents two stacks using only one array common for both stacks.
    return 0;
}