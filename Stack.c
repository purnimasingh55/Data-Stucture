#include<stdio.h>
#define size 100
int stack[size],N,top = -1;
void push(){
	int n;
	printf("Enter the element you want to push: ");
	scanf("%d", &n);
	if(top==size-1){
		printf("Stack is Underflow\n");
	}
	else{
		stack[top+1] = n;
		top++;
	}
}

void pop(){
	if(top==-1){
		printf("Stack is Underflow\n");
	}
	else{
		top--;
	}
}


void show(){
	for(int i =top; i>=0;i--){
		printf("%d\n", stack[i]);
	}
	if(top == -1){
		printf("Stack is underflow\n");
	}
}

int main(){
	int N;
	printf("Enter the size of stack: ");
	scanf("%d",&N);
		
	int choice;
	while(choice!=4){
	printf("Chose any opration from mentions below: \n1. Push\n2. Pop\n 3. Show\n4. Exit\n");
	
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			{
				push();
				break;
			}
		case 2:
			{
				pop();
				break;
			}
		case 3:
			{
				show();
				break;
			}
		case 4:
			{
				printf(" Exiting...");
				break;
			}
		default:
			{
				printf("Please Enter a valid choice: ");
				break;
			}
	};
	
	}
	
	
}
