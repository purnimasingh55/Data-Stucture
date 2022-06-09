#include <stdio.h>
#define size 5

int q[size], front = 0, rear = -1;

void enqueue(int data)
{
    if(rear == size-1)
        printf("Queue is full\n\n");
    else
    {
        rear++;
        q[rear] = data;
    }
}

void dequeue()
{
    if(rear == -1)
        printf("Queue is empty\n\n");
    else
    {
        front++;
        if(front > rear)
        {
            front = 0;
            rear = -1;
        }
    }
}

void display()
{
    for(int i=front; i<=rear; i++)
        printf("%d ",q[i]);
    
    printf("\n\n");
}

int main(){
	enqueue(6);
	enqueue(8);
	enqueue(10);
	enqueue(11);
	display();
	dequeue();
	display();
}
