#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head=NULL;
void append(){
	struct node*newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter element to node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
		if (head==NULL){
		head=newnode;
	}
	else{     // if node already conists elements  // adding element at last node
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
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

int main(){
	append();
	display();
}
