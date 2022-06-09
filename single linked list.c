#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void delete();
struct node{
	int data;
	struct node *next;
};
struct node *start = NULL;
int main(){
	//Asking the user to choose between the operation s/he wants to perform on the sinle linked list
	printf("Enter your choice from the following: ");
	printf("\n1. Create");
	printf("\n2. Display");
	printf("\n3. Insert");
	print("\n4. Delete");
	printf("\n5. Exit");
	int choice;
	scanf("%d", &choice);
	switch(choice){
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			insert();
			break;
		case 4:
			delete();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Please enter a valid choice");
			break;
	}
	return 0;
}
void create(){
	struct node *temp, *ptr;
	//Memory allocation
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp = NULL){
		printf("No space to create the node");
		exit(0);
	}
	printf("\n Enter the value to be added in the node ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if(start = NULL){
		start = temp;
	}
	else{
		ptr = start;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
}
void display(){
	struct node *temp;
	if(start = NULL){
		printf("The list is empty");
	}
	else{
		//temp = start;
		while(temp!=NULL){
				printf("\n%d", temp->data);
		        temp = temp->next;
		}
	    printf("NULL");	
	}

}

void insert_begin(){
	struct node *temp;
	//Memory allocation
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp =NULL){
		printf("\nThe list is full");
	}
	printf("\nEnter the value of node");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if(start = NULL){
		start = temp;
	}
	else{
		temp->next = start;
		start = temp;
	}
}
  
void delete(){
	struct node *temp;
	if(start = NULL){
		printf("The list is empty");
	}
	else{
		temp = start;
		
	}
}
