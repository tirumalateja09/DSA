#include<Stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
	int x;
	printf("Enter the data:");
	scanf("%d",&x);
	if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else if(((rear+1)%N)==front){
		printf(" over flow queue\n");
	}
	else{
		rear=((rear+1)%N);
		queue[rear]=x;
	}
}
void dequeue(){
	if(front==-1 && rear==-1){
		printf("Under flow");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		printf("Dequeue element is ----->%d",queue[front]);
		front=(front+1)%N;
	}
}
void display(){
	if(front==-1 && rear==-1){
	    printf("Under flow");
	}
	else{
		int i;
		i=front;
		while(i!=rear){
			printf("--------------->%d,",queue[i]);
			i=(i+1)%N;
		}
		printf("--------------->%d,",queue[i]);
		
	}
}
void peek(){
	if(front==-1 && rear==-1){
	    printf("Under flow");
	}
	else{
		printf("peek element is---->%d",queue[front]);
	}
	
}
int main(){
	printf("------------------Circular Queue OPerations Uing Arrays-------------------");
	int ch;
	while(1){
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
			switch(ch){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:peek();
			break;
			case 5:exit(1);
			break;
			default:
				printf("Invalid choice!");
		}
	}
}
