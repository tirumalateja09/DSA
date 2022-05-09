#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
void  create(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter elements into node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node* temp;
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode; 
	}
}
void display(){
	struct node* temp=head;
	if( temp==NULL){
		printf("\nNo elements in the list\n");
	}
	else{
		while(temp!=NULL){
			printf("---->%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void length(){
	struct node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("\nLength of single linked list is %d",count);
}
void addatbg(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter element to node:");
	scanf("%d",&newnode->data);
	if(head==NULL){
		head=newnode;
	}
	else{
	    newnode->next=head;
		head=newnode;	
	}
}
void addatend(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element :");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	
	
}
void addatloc(){
	struct node* newnode;
	int loc,len,i=1;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element to node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	printf("Enter the location to insert :");
	scanf("%d",&loc);
	len=length();
	if(loc>len){
		printf("invalid location\n");
	}
	else{
		struct node* p;
		p=head
		while(i<loc-1){
		p=p->next;
		i++;	
		}
		newnode->next=p->next;
		p->next=newnode;
		
	}
	
}
void deletenode(){
	
}

int main(){
	printf("******Single linked list*******\n");
	int ch;
	
	while(1){
		printf("\n1.create\n2.display\n3.length\n4.Add at beginning\n5.Add at End\n6.Add at location\n7.delete\n8.Exit\n");
	    printf("choose the option:");
	    scanf("%d",&ch);
		switch(ch){
			case 1:	create();
			break;
			case 2:display();
			break;
			case 3:length();
			break;
			case 4:addatbg();
			break;
			case 5:addatend();
			break;
			case 6:addatloc();
			break;
			case 7:deletenode();
			break;
			case 8:exit(1);
			break;
			default:
				printf("enter valid choice\n");
		}
	}

	
}