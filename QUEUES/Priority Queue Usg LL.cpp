#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	int priority;
	struct node* next;
}*head=NULL;

void penqueue()
{
	struct node* newnode;
	struct node* temp=head;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("\nEnter the Element:");
	scanf("%d",&newnode->data);
	printf("\nEnter priority:");
	scanf("%d",&newnode->priority);
	newnode->next=NULL;
	if(head==NULL  )
	{
		head=newnode;
	}
	else if( newnode->priority  > head->priority )
	{     
	   	   newnode->next=head;
		   head=newnode;
	}
	else 
	{
		struct node* rear=head;
		while(rear->next!=NULL &&  newnode->priority < rear->next->priority )
		{         
		        rear=rear->next;      
	    }
		newnode->next=rear->next;
		rear->next=newnode;
    }
}	
void pdequeue()
{
	struct node* front=head;
	printf("\n\t\tDequeue Element is %d with priority ->%d",front->data,front->priority);
	head=front->next;
	
}
void display()
{
	struct node* temp=head;
	if( head==NULL)
	{
		printf("\nPqueue is Null\n");
	}
	else
	{
		while(temp!=NULL)
		{
		printf("\n\t\t Element is->%d with priority ->%d",temp->data,temp->priority);
		temp=temp->next;
	    }	
	}
}
int main()
{
	printf("--------------------priority queues using Linked list(Desending Order)--------------------");
	int ch;
    while(1)
	{
    	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    	printf("\nEnter your choice:");
    	scanf("%d",&ch);
    	switch(ch){
    		case 1:penqueue();
    		break;
    		case 2:pdequeue();
    		break;
    		case 3:display();
    		break;
    		case 4:exit(1);
    		break;
    		default:
    			printf("Invalid choice");
		}
	}
}
