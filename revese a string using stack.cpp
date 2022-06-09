#include<stdio.h>
#include<string.h>
#define max 100
int s[max], top = -1,data;
int isempty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(){
    if(top == max-1){
        return 1;
    }
    else{
        return 0;
    }
    
}

void push(char x){
    if(isfull()){
        return;
    }
    else{
        top++;
        s[top] = x;
    }
}

char pop(){
    if(isempty()){
        return 0;
    }
    data = s[top];
    top = top-1;
    return data;
}
int main(){
    char str[max];
    gets(str);
    int len = strlen(str),i;
    for(i=0;i<len;i++){
        push(str[i]);
    }
    for(i=0;i<len;i++){
        str[i] = pop();
    }
    printf("%s",str);
}












/*
// You are using GCC
#include<stdio.h>
#include<string.h>
#define max 100
int s[max],top=-1,data;
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){
    if(top==max-1)
    return 1;
    else
    return 0;
}
void push(char x){
    if(isfull())
    return;
    else{
        top++;
        s[top] = x;
    }
}

char pop(){
    if(isempty())
    return 0;

        int data = s[top];
        top--;
        return data;
    
}
int main(){
    char str[max];
    gets(str);
    int len = strlen(str),i;
    for(i=0;i<len;i++)
        push(str[i]);
        for(i=0;i<len;i++)
            str[i] = pop();
            printf("%s",str);
}

*/
