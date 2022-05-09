#include<stdio.h>
#include<Stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* front=0;
struct node* rear=0;
void enqueue(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter element:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(rear==0 && front==0){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(){
	struct node* temp;
	temp=front;
	if(rear==0 && front==0){
	    printf("underflow queue\n");
	}
	else{
		printf("Dequeue Element is--->%d",front->data);
		front=front->next;
		temp->next=0;
		free(temp);
	}
}
void display(){
	if(rear==0 && front==0){
	    printf("underflow queue\n");
	}
	else{
		struct node* temp;
	    temp=front;
		while(temp!=0){
		printf("------------->%d,",temp->data);
		temp=temp->next;
	    }
    }

}
void peek(){
	if(rear==0 && front==0){
	     printf("underflow queue\n");
	}
	else{
		printf("peek element ---->%d,",front->data);
	}
}
int main(){
	printf("--------------*Queues operations using linked list*------------------\n");
    int ch;
    while(1){
    	    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n");
    		printf("Enter choice:");
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
