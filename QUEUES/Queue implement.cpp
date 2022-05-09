#include<stdio.h>
#include<stdlib.h>
# define SIZE 5
int queue[SIZE];
int front=0,rear=0;
void insert(){
	if(rear==SIZE-1){
		printf("\nQueue is full\n");
	}
	else{
		int x;
		printf("Enter Element:");
		scanf("%d",&x);
		queue[rear]=x;
		rear++;
	}
}
void display(){
	if(front==rear){
		printf("\nQueue is Empty\n");
	}
	else{
		int i;
		for(i=front;i<rear;i++){
			printf("%d",queue[i]);
		}
	}
}
void del(){
	if(front==rear){
		printf("\nQueue is Empty\n");
	}
	else{
		int i;
		printf("Deleted element from the Queue is--->%d",queue[front]);
		for(i=front;i<rear-1;i++){
			queue[i]=queue[i+1];
		}
		rear--;
	}
	
}
int main(){
	printf("--------queue operations--------");
	int ch;
	while(1){
		printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n");
		printf("Choose options:");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert();
			break;
			case 2:display();
			break;
			case 3:del();
			break;
			case 4:exit(1);
			break;
			default:
				printf("Invalid input!");
		}
	}
}
