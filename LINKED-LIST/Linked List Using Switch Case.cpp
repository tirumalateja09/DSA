#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head=NULL;
void append(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter element to node:");
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
void display(){
	struct node*p;
	p=head;
	while(p!=NULL){
		printf("%d,",p->data);
		p=p->next;
	}
}
void AddatBg(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter element to node:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
		
	}
}
int length(){
	struct node*p=head;
	int count=0;
	while(p!=NULL){
		count++;
		p=p->next;
	}
	return count;
}
void  Addatloc(){
	struct node*newnode,*p;
	int len,loc,i=1;
	printf("Enter the loation to add node\n");
	scanf("%d",&loc);
	len=length();
	if(loc>len){
		printf("Enter valid location");
	}
	else{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Element to Node");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	p=head;
	while(i<loc-1){
       p=p->next;
	   i++;		
	}
	newnode->next=p->next;
	p->next=newnode;
	}
}
void  Delete(){
	struct node*p;
	int loc,len,i;
	printf("Enter the location:");
	scanf("%d",&loc);
	len=length();
	if(loc>len){
		printf("Enter invalid location");
	}
	else{
		if(loc==1){
		p=head;
		head=p->next;
		p->next=NULL;
		free(p);	
		}
		else{
			struct node*p,*q;
			p=head;
			int i=1;
			while(i<loc-1){
				p=p->next;
				i++;
			}
			q=p->next;
			p->next=q->next;
			q->next=NULL;
			free(q);
		}
	}
	
}
void reversenode(){
	struct node*prevnode,*currentnode,*nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(nextnode!=0){
		nextnode=currentnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
}
int main(){
	int ch;
 while(1){
 	printf("\n1.Append \n2.Display \n3.Add Element at Beginning\n4.Length of linked \n5.Add Element at Location\n");
 	printf("6.Delete the Specific Location Node \n 7.Reverse the Node\n 8.Exit\n");
 	printf("Enter your choise:");
	scanf("%d",&ch);
 	switch(ch){
 		case 1:append();
 	   break;
 	   case 2:display();
 	   break;
 	   case 3:AddatBg();
 	   break;
 	   case 4:printf("%d ",length());
 	   break;
 	   case 5:Addatloc();
 	   break;
 	   case 6:Delete();
 	   break;
 	   case 7:reversenode();
 	   break;
 	   case 8:exit(1);
 	   break;
 	default:
 	     printf("Enter valid choice");
	 }
 	  
 }
	
}
