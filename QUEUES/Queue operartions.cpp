#include<stdio.h>
#include<Stdlib.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(){
	int x;
	printf("Enter element :");
	scanf("%d",&x);
	if(rear==SIZE-1){
	printf("Overflow queue\n");
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
}
void dequeue(){
	if(front==-1 && rear==-1){
		printf("underflow\n");
	}
	else if(front==0 && rear==0){
		front=-1;
		rear=-1;
	}
	else{
		printf("Dequeued Element is--->%d",queue[front]);
		front++;
	}
}
void display(){
	if(front==-1 && rear==-1){
		printf("underflow\n");
	}
	else{
		int i;
		for(i=front;i<=rear;i++){
			printf("-------->%d,",queue[i]);
		}
	}
}
void peek(){
	if(front==-1 && rear==-1){
		printf("underflow\n");
	}
	else{
		printf("----->peek element is->%d",queue[front]);
	}
}
int main(){
	printf("------------------*Queue Operations*-------------------\n");
	int ch;
	while(1){
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:peek();
			break;
			case 5:exit(1);
			break;
			default:
				printf("Invalid input!");
		}
	}
}
