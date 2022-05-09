#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* front=0;
struct node* rear=0;
void enqueue(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter your data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if( front==0 && rear==0 ){
		front=rear=newnode;
		rear->next=front;
	}
	else{
		rear->next=newnode;
		rear=newnode;
		newnode->next=front;
	}
}
void dequeue(){
	if( front==0 && rear==0 ){
		printf("under flow queue\n");
	}
	else if( front==rear ){
		printf("Dequeue Element is----->%d",front->data);
		front=rear=0;
	}
	else{
		printf("Dequeue Element is----->%d",front->data);
		struct node* temp;
		temp=front;
		front=front->next;
		rear->next=front;
		free(temp);
	}
}
void display(){
	struct node* temp;
	temp=front;
	if( front==0 && rear==0 ){
		printf("underflow queue\n");
	}
	else{
		while(temp!=rear){
		printf("-------->%d,",temp->data);
		temp=temp->next;
	}
	printf("-------->%d,",temp->data);
	
	}
}
void peek(){
	if( front==0 && rear==0 ){
		printf("underflow queue\n");
	}
	else{
		printf("peek element is----->%d",front->data);
	}
	
}
int main(){
	printf("-----------------*Circular Queue Using Linked List*------------------");
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
				printf("Invalid choice!");
		}
	}
}
