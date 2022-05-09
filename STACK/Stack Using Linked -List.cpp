#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* top=0;
void push(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element :");
	scanf("%d",&newnode->data);
	newnode->link=top;
	top=newnode;
}
void pop(){
	struct node* temp;
	if(top==0){
		printf("under flow\n");
	}
	else{
		temp=top;
		printf("pop out element is ->%d",top->data);
		top=top->link;
		free(temp);
	}
}
void peek(){
	if(top==0){
		printf("under flow\n");
	}
	else{
		printf("peek element is->%d",top->data);
	}
}
void display(){
	struct node* temp=top;// need to take temporary variable to traverse to the below 
	if(top==0){
		printf("under flow\n");
	}
	else{
		while(temp!=0){
			printf("%d,",temp->data);
			temp=temp->link;
		}
	}
}
int main(){
	printf("-----------------*stack using Linked-List*--------------------\n");
	int ch;
	do{
		printf("\n1.Push\n");
		printf("\n2.Pop\n");
		printf("\n3.Peek\n");
		printf("\n4.Display\n");
		printf("\n5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			case 5:printf("\nExit\n");
			break;
			default:
				printf("\nEnter valid choice\n");
		}
	}while(ch!=5);
	
}
