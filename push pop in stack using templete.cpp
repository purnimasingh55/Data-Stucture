#include <iostream>
using namespace std;
int stack[8];
int maxsize = 8;
int top = -1;
// Function to check if the stack is empty
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
//function to check if stack is full
int isfull(){
    if(top==maxsize){
        return 1;
    }
    else{
        return 0;
    }
}
// function to pop the element from the stack
template <typename T>
T pop(){
    T data;
    //checking if the stack is empty or not
    //if not empty then the first  element is poped else element is not poped
    if(! isempty()){
        data = stack[top];
        top--;
        return data;
    }
    else{
        cout<<"Could not pop the item. The stack is empty\n";
    }
}
//function to push the element in stack
template <typename p>
p push(p data){
    // checking if the stack is full or not 
    //if not full then the element is at top pushed else not pushed
    if(!isfull()){
        top++;
        stack[top] = data;
    }
    else{
        cout<<"Could not push the item. The stack is full\n";
    }
}
int main()
{
    push<int>(3);
    push<float>(5.0);
    push<int>(7);
    push<float>(8.0);
    cout<<"Elements are: \n";
    int data = <int>pop()
    cout<<data;
    return 0;
}