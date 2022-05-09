#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head=NULL;
 int  length(){
	struct node*p=head;
	int count=0;
	while(p!=NULL){
		count++;
		p=p->next;
	}
	return count;
}
void display(){
	struct node*p=head;
	while(p!=NULL){
		printf("%d,",p->data);
		p=p->next;
	}
	printf("\n");
}
void addatbg(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Add Element To Node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node*p=head;
		newnode->next=p;
		head=newnode;
	}
}

void addatend(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Add Element To Node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node*p=head;
	    while(p->next!=NULL){
	    	p=p->next;
		}
		p->next=newnode;
	}
}
void addatloc(){
	int loc,len;
	printf("Enter the location to add element:");
	scanf("%d",&loc);
	len=length();
	if(loc>len){
		printf("Enter valid Location\n");
	}
	else if(loc=1){
		addatbg();
	}
	else if(loc=length()){
		addatend();
	}
	else{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Add Element to Node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node*p=head;
		int i=1;
		while(i<loc-1){
			p=p->next;
			i++;
		}
		newnode->next=p->next;
		p->next=newnode;
		
	}
	}

}
 void deleteatbg(){
 	struct node*p=head;
 	p=head;
 	head=p->next;
 	free(p);
 }
 void deleteatend(){
 	if(head==NULL){
 		printf("Node is empty\n");
	 }
	 else{
	 	if(head->next=NULL){
	 		head=NULL;
		 }
		 else{
		 	struct node*p,*q;
		 	p=head;
		 	q=p->next;
		 	while(q->next!=NULL){
		 		p=p->next;
		 		q=q->next;
			 }
			 p->next=NULL;
			 free(q);
		 }
	 }
	 
 	
 }
 void deleteatloc(){
 	int loc,len;
 	printf("Enter Location to delete node:");
 	scanf("%d",&loc);
 	len=length();
 	if(loc>len){
 		printf("Enter valid Location\n");
	 }
	else{
		struct node*p,*q;
		int i=1;
		p=head;
		q=p->next;
		while(i<loc-1){
			p=p->next;
			q=q->next;
		}
		p->next=q->next;
		q->next=NULL;
		free(q);
		
	}
 }
 void append(){
 	struct node*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	printf("Add Elements to Node:");
 	scanf("%d",&newnode->data);
 	newnode->next=NULL;
 	if(head==NULL){
 		head=newnode;
	 }
	 else{
	 	printf("Again Enter your Number\n");
	 	addatend();
	 }
 	
 }

int main(){
	printf("----------------*Singe Linked List Operations*----------------\n");
	while(1){
		int ch;
       printf("-----------------------------------------------------\n");
		printf("1.Add at Beginning\n2.Add at Location\n3.Add at End");
		printf("\n4.Delete At Beginning\n5.Delelte at Location\n6.Delete at End");
		printf("\n7.Display\n8.Length\n9.Append\n10.Exit\n");
		printf("----------------------------------------------------\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1: addatbg();
			break;
			case 2: addatloc();
			break;
			case 3: addatend();
			break;
			case 4: deleteatbg();
			break;
			case 5: deleteatloc();
			break;
			case 6: deleteatend();
			break;
			case 7: display();
			break;
			case 8: printf("%d\n",length());
			break;
			case 9: append();
			break;
			case 10: exit(1);
			break;
			default:
				printf("Enter valid Choice\n");
		}
	}
}


