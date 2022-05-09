#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node*head=NULL;
void append(){
	struct node*newnode,*p;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter element to node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
		if (head==NULL){
		head=newnode;
	}
	else{     // if node already conists elements  // adding element at last node
		p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=newnode;
	}

}
void display(){
	struct node*p;
	p=head;
	if(p==NULL){
		printf("Node is empty");
	}
	else{
		while(p!=NULL){
			printf("%d",p->data);
			p=p->next;
		}
	}
}
void insertatsorted(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	
	else{
		   struct node *p,*q;
	       p=head;
	       q=NULL;
			while(p!=NULL && p->data < newnode->data){
			q=p;
			p=p->next;
		}
		newnode->next=p;
		q->next=newnode;
	}
		 display();

}

int main(){
    printf("--Single linked list operstions--\n");
    int ch;
    while(1){
    	printf("\n1.Append\n2.Display\n3.Insert at Sorted Position\n4.Exit\n");
    	printf("enter your choice:");
    	scanf("%d",&ch);
    	switch(ch){
    		case 1:append();
    		break;
    		case 2:display();
    		break;
    		case 3:insertatsorted();
			break;
			case 4:exit(1);
			break;
			default:
				printf("invalid choice!");
		}
    	
	}

	
}
