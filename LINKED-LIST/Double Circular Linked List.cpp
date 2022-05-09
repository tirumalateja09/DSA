#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
}*head=NULL,*tail;
void create(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nAdd element to data\n");
	scanf("%d",&newnode->data);
	newnode->prev=newnode->next=NULL;
	if(head==NULL){
	  tail=head=newnode;
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
void display(){
	struct node* temp=head;
	if(head==NULL){
		printf("\nList is Empty\n");
	}
	else{
		while(temp!=tail){
			printf("--->%d",temp->data);
			temp=temp->next;
		}
		printf("--->%d",temp->data);
	}
}
int length(){
	struct node* temp=head;
	int count=0;
	if(head==NULL){
		printf("\nList is Empty\n");
	}
	else{
		while(temp!=tail){
			count++;
			temp=temp->next;
		}
		count++;
    return count;
	
}
}
void addatbg(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nAdd element to data\n");
	scanf("%d",&newnode->data);
	newnode->prev=newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		newnode->next=newnode->prev=head;
	}
	else{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	    newnode->prev=tail;
	    tail->next=newnode;
	}
	
}
void addatend(){
		struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nAdd element to data\n");
	scanf("%d",&newnode->data);
	newnode->prev=newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		newnode->next=newnode->prev=head;
	}
	else{
			tail->next=newnode;
		newnode->prev=tail;
		newnode->next=head;
		head->prev=newnode;
		tail=newnode;
	}
	
}
void addatloc(){
	int loc,len;
	printf("Enter the location :");
	scanf("%d",&loc);
	len=length();
	if(loc>len){
		printf("\nEntered Location is Invalid\n");
	}
	else{
		if(loc==1){
			addatbg();
		}
		else if(loc==length()){
			addatend();
		}
		else{
				struct node* newnode,*p=head;
	           newnode=(struct node*)malloc(sizeof(struct node));
	           printf("\nAdd element to data\n");
	           scanf("%d",&newnode->data);
	           newnode->prev=newnode->next=NULL;
	           int i=1;
	           while(i<loc-1){
	           	p=p->next;
			   }
			   newnode->next=p->next;
			   p->next->prev=newnode;
			   p->next=newnode;
			   newnode->prev=p;
			
		}
	}
}
void deleteatbg(){
	struct node* p;
	if(head->next==head && head->prev==head){
		head=NULL;
		free(head);
	}
	else{
		p=head;
		tail->next=p->next;
		head=p->next;
		p->next->prev=tail;
		p->next=NULL;
		free(p);
	}
}
void deleteatend(){
	struct node* p;
	if(head==NULL){
		printf("\nList is empty\n");
	}
    else{
    	p=head;
    	while(p->next!=tail){
    		p=p->next;
		}
		tail=p->prev;
		p->next=p->prev=NULL;
		free(p);
		tail->next=head;
		head->next=tail;
	}
}
void deleteatloc(){
	int loc,len;
	printf("Enter the location :");
	scanf("%d",&loc);
	len=length();
	if(loc>len){
		printf("\nEntered Location is Invalid\n");
	}
	else{
		if(loc==1){
			deleteatbg();
		}
		else if(loc==length()){
			deleteatend();
		}
		else{
			struct node *p,*q;
			q=head;
			p=head->next;
			int i;
			while(i<loc-1){
				q=q->next;
				p=p->next;
			}
			q->next=p->next;
			p->next->prev=q;
			p->next=p->prev=NULL;
			free(p);
		}
	
}
}

int main(){
	int ch;
	printf("\n-------------------------*Double circular linked list*----------------------------/n");
	while(1){
		printf("\n1.create list\n2.display\n3.length\n4.Add at beginning\n5.Add at End\n6.Add at Location\n");
		printf("7.Delete at Beginning\n8.Delete at End\n9.Delete at Location\n10.Reverse\n11.Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:create();
			break;
			case 2:display();
			break;
			case 3:printf("----->%d,",length());
			break;
			case 4:addatbg();
			break;
			case 5:addatend();
			break;
			case 6:addatloc();
			break;
			case 7:deleteatbg();
			break;
	    	case 8:deleteatend();
			break;
			case 9:deleteatloc();
			break;
			case 10:reverse();
			break;
			case 11:exit(1);
			break;
			default:
				printf("\nEntered choice is invalid\n");
		}
	}
}
