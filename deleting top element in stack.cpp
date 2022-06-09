// You are using GCC
#include<iostream>
#define size 100
int s[size],top=-1;
void push(int x){
    if(top==size-1){
        return;
    }
    else{
        scanf("%d",&x);
        s[++top] = x;
    }
    
}
void pop(){
    if(top==-1)
    return;
    else{
        printf("Deleted element is %d",s[top]);
        top--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        push(i);
        
    }
    pop();
    printf("\nThe elements in stack\n");
    for(int i=top;i>=0;i--)
    printf("%d\n",s[i]);
}
