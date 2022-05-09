#include<Stdio.h>
#include<Stdlib.h>
struct node{
	int data;
	struct node* prev;
	struct node* next;
}*head=0,*tail=0;
void append(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("Enter Element:");
	scanf("%d",&newnode->data);
	newnode->next=newnode->prev=0;
	if(head==NULL){
		head=tail=newnode;
	}
	else{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
}
void newele(){
	int x;
	struct node* newnode;
	struct node* p;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter New Element:");
	scanf("%d",&newnode->data);
	newnode->next=newnode->prev=0;
	printf("\nEnter Specific Element From List:");
	scanf("%d",&x);
	p=head;
	while(p!=tail){
		if( p->data==x ){
			struct node* q;
			q=p->next;
			p->next=newnode;
			newnode->prev=p;
			newnode->next=q;
			q->prev=newnode;
		}
		p=p->next;
	}
}
void display(){
	struct node* temp;
	temp=head;
    if(head==NULL){
    	printf("List is Empty\n");
	}
	else{
		while(temp!=tail){
		printf("--------->%d,",temp->data);
		temp=temp->next;
	    }
	printf("--------->%d,",temp->data);
	}
	
	
}
int main(){
	printf("-----------------------Insert After Specific data in doubly linked list---------------");
	int ch;
	while(1){
		printf("\n1.Append\n2.Enter New Element\n3.Display\n4.Exit");
		printf("\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:append();
			break;
			case 2:newele();
			break;
			case 3:display();
			break;
			case 4:exit(1);
			break;
			default:
				printf("\nInvalid input!");
		}
	}
}
