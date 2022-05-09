#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL;
int  length(void){
	struct node*p=head;
	int count=0;
	while(p!=NULL){
		count++;
		p=p->next;
	}
	return count;	
}
void display(){
	if(head==NULL){
		printf("\nList is empty\n");
	}
	else{
		struct node*p=head;
	   while(p!=NULL){
		printf("%d,",p->data);
		p=p->next;
	    }	
	}
}
void append(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nAdd Elements to Node:");
	scanf("%d",&newnode->data);
	newnode->prev=newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node*p=head;
		while(p->next!=NULL){
			p=p->next;
		}
	     p->next=newnode;
	     newnode->prev=p;
	}
}
void addatbg(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nAdd element to Node:");
	scanf("%d",&newnode->data);
	newnode->prev=newnode->next=NULL;
    if(head==NULL){
    	head=newnode;
	}
	else{
			head->prev=newnode;
	        newnode->next=head;
	        head=newnode;
	}
	
}
void addatend(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nAdd element to Node:");
	scanf("%d",&newnode->data);
	newnode->prev=newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node*p=head;
		while(p->next!=NULL){
			p=p->next;
		}
	     p->next=newnode;
	     newnode->prev=p;
	     free(p);
	}
}
void addatloc(){
     int len,loc;
     printf("\nEnter your Location to Add Element to Node\n");
     scanf("%d",&loc);
     len=length();
     if(loc>len){
     	printf("\nEnter valid location\n");
	 }
	 else{
	       struct node*newnode;
         	newnode=(struct node*)malloc(sizeof(struct node));
	        printf("\nAdd element to Node:");
         	scanf("%d",&newnode->data);
	        newnode->prev=newnode->next=NULL;
	        if(loc==1){
	        	addatbg();
			}
			else if(loc==length()){
				addatend();
			}
			else{
				struct node*p=head;
				int i=1;
				while(i<loc-1){
					p=p->next;
					i++;
				}
				newnode->next=p->next;
				p->next->prev=newnode;
				p->next=newnode;
				newnode->prev=p;
				
			}
	 	
	 }

}
void deleteatbg(){
	if(head==NULL){
		printf("\nNode is empty\n");
	}
	else{
		
	 if(head->next==NULL && head->prev==NULL){
		head=NULL;
		free(head);
	}
	else{
		struct node*p=head;
		p->next->prev=NULL;
		head=p->next;
		free(p);
	}
}
}
void deleteatend(){
	if(head==NULL){
		printf("Node is empty");
	}
	else{
		
	 if(head->prev==NULL && head->next==NULL){
		head=NULL;
		free(head);
	}
	else{
		struct node*p,*q;
	    p=head;
	    q=p->next;
	    while(q->next!=NULL){
	    	p=p->next;
	    	q=q->next;
		}
		q->prev=NULL;
		p->next=NULL;
		free(q);
		
    }
}
	
}
void deleteatloc(){
	int loc,len;
	printf("\nEnter your location\n");
	scanf("%d",&loc);
	len=length();
	if(loc>len){
		printf("\nEnter valid Location\n");
	}
	else{
		struct node*p,*q;
		int i=1;
		p=head;
		q=p->next;
		while(i<loc-1){
			p=p->next;
			i++;
		}
		q=p->next;
		p->next=q->next;
		q->next->prev=p;
		free(q);
	}
}
void reversenode(void)
{
	struct node *p,*q;
	p=head;
	q=p->next;
	p->next=0;
	p->prev=q;
	while(q!=NULL){
		q->prev=q->next;
		q->next=p;
		p=q;
		q=q->prev;
	}
	head=p;	
} 
int main(){
	printf("\n----------------------------*Double linked list operations*-----------------------------\n");
	int ch;
	printf("\n1.Append\n2.Add Elements at Beginning\n3.Add at Location\n4.Add at End");
	printf("\n5.Delete at Beginning\n6.Delete at End\n7.Delete at Location\n8.Display\n9.Length\n10.Reverse Node\n11.Exit");
	while(1){
			printf("\nEnter your choice:");
			scanf("%d",&ch);
			switch(ch){
				case 1:append();
				break;
				case 2:addatbg();
				break;
				case 3:addatloc();
				break;
				case 4:addatend();
				break;
				case 5:deleteatbg();
				break;
				case 6:deleteatend();
				break;
				case 7:deleteatloc();
				break;
				case 8:display();
				break;
				case 9:printf("%d",length());
				break;
				case 10:reversenode();
				break;
				case 11:exit(1);
				break;
				default:
					printf("\nEnter valid choice\n");
				
		    }
	}
	
}
