#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int  getcount( struct node* head){
	struct node* p=head;
	int count=0;
	while(p!=NULL){
		count++;
		p=p->next;
	}
	return count;
}
int  getintersectionnodes(int d,struct node* head1, struct node* head2){
	struct node* p1= head1;
	struct node* p2=head2;
	int i=0;
	for(i=0;i<d;i++){
		if(p1==NULL){
			return -1;
		}
		else{
			p1=p1->next;
		}
	}
	while(p1!=NULL && p2!=NULL){
		if(p1==p2){
			return p1->data;
		}
		else{
			p1=p1->next;
		    p2=p2->next;
		}
	}
}
int  getintersection(struct node* head1, struct node* head2){
	int c1=getcount(head1);
	int c2=getcount(head2);
	int d;
	if(c1>c2){
		d=c1-c2;
		return getintersectionnodes(d,head1,head2);
	}
	else{
		d=c2-c1;
		return getintersectionnodes(d,head2,head1);
	}
}
int main(){
	struct node* newnode;
	struct node* head1=(struct node*)malloc(sizeof(struct node));
	head1->data=3;
	struct node* head2=(struct node*)malloc(sizeof(struct node));
	head2->data=10;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=6;
	head1->next=newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=9;
	head1->next->next=newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=15;
	head1->next->next->next=newnode;
	head2->next=newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=30;
	head2->next->next=newnode;
	head2->next->next->next=NULL;
	  
	printf(" intersection node data is ->%d",getintersection(head1,head2));
	
}
