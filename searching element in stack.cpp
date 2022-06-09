// You are using GCC
#include<stdio.h>
#define size 100
int s[size], top =-1;
void push(int val){
    if(top == size-1)
    return;
    else{
        top++;
        s[top] = val;
    }
}

int main(){
    int i, ele,n;
    scanf("%d", &n);
    int a[n];
    for(i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for( i=0;i<n;i++){
        push(a[i]);
    }
    scanf("%d",&ele);
    i=0;
    while(i<n && ele!=a[i]){
        i++;
    }
    
    
    if(i<n){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
}

