#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[30];
	char id[10];
	float cgpa;
	char   add[30]; 
}s;
struct node{
	struct node* prev;
    struct node* next;
    struct student s;
}*head=NULL,*tail=NULL;

void insert()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter student name:");
    scanf("%s",newnode->s.name);
    printf("Enter Id :");
    scanf("%s",newnode->s.id);
    printf("Enter CGPA:");
    scanf("%f",&newnode->s.cgpa);
    printf("Enter Address:");
    scanf("%s",newnode->s.add);
    newnode->next=0;
    newnode->prev=0;
    if(head==NULL)
	{
       head=newnode;
	   tail=newnode;	
	}
	else
	{
	  tail->next=newnode;
	  newnode->prev=tail;
	  tail=newnode;
	}
	
}
void display()
{   
     struct node* temp=head;
     printf("\t\tStudent Name\tStudent Id\tStudent Cgpa\tStudent Address\n");
    while(temp!=NULL)
	{
     	printf("\t\t%s",temp->s.name);
     	printf("\t%s",temp->s.id);
     	printf("\t\t%.2f",temp->s.cgpa);
     	printf("\t\t%s",temp->s.add);
     	temp=temp->next;
	}
	printf("\n");
	 	
}
int main()
{
	printf("-------------------structure used in  doubly linked list------------------");
	int ch;
	while(1)
	{
		printf("\n1.Enter the details\n2.display\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert();
			break;
			case 2:display();
			break;
			default:
				printf("Invalid input!");
		}
	}
}

