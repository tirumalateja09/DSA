#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*head=NULL;
int length(){
	int count =0;
	struct node*p =head;
	while(p!=NULL){
		count++;
		p=p->next;
	}
	return count;
}
void display(){
	struct node* p=head;
	while(p!=NULL){
		printf("%d,",p->data);
		p=p->next;
	}
}
int  delmiddlenode(){
	struct node* p;
	struct node* q;
	p=head;
	q=head;
	while(q!=NULL){
		q=q->next;
		if(q!=NULL){
			q=q->next;
		}
		p=p->next;
		if(q!=NULL){
		   q=q->next;	
		}
	}
	return p->data;
}
int main(){
	// create list 
	// 1-2-3-4-5 elements in a list 
	struct node* newnode;
	struct node* p=(struct node*)malloc(sizeof(struct node));
	p->data=1;
	head=p;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=2;
	p->next=newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=3;
	p->next->next=newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=4;
	p->next->next->next=newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=5;
	p->next->next->next->next=newnode;
	newnode->next=NULL;
	int ch;
	while(1){
		printf("\n1.length\n2.display\n3.Find Middle Node\n4.Exit\n");
	    printf("Enter your choie:");
	    scanf("%d",&ch);
		switch(ch){
			case 1:printf("length=%d",length());
			break;
			case 2:display();
			break;
			case 3:printf("Middle Element is ->%d",delmiddlenode());
			break;
			case 4:exit(1);
			break;
			default:
				printf("invalid input!");
		}
	}
	
}
