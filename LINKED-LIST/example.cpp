#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;
void append(void)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&newnode->data);
	if(head==NULL){
		head=tail=newnode;
		newnode->prev=newnode->next=head;
	}
	else{
		tail->next=newnode;
		newnode->prev=tail;
		newnode->next=head;
		head->prev=newnode;
		tail=newnode;
	}
}
int length(void)
{
	int len=0;
	if(head==NULL){
		printf("\nList is empty\n");
	}
	else{
		struct node *temp;
		temp=head;
		while(temp->next!=head){
			len++;
			temp=temp->next;
		}
		len++;
		return len;
	}
}
void display(void)
{
	struct node *temp;
	temp=head;
	if(head==NULL){
		printf("\nList is empty\n");
	}
	else{
		while(temp->next!=head){
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}
int main(){
	int ch;
	printf("\n-------------------------*Double circular linked list*----------------------------/n");
	while(1){
		printf("\n1.create list\n2.display\n3.length\n4.Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:append();
			break;
			case 2:display();
			break;
			case 3:printf("----->%d,",length());
			break;
			case 4:exit(1);
			break;
			default:
				printf("\nEntered choice is invalid\n");
		}
	}
}
