#include<stdio.h>
#include<stdlib.h>
#define N 5
//-------------------------------------------------------------------------------
int dequeue[N];
int front=-1;
int rear=-1;
//---------------------------------------------------------------------------------
void enqueuerear(){
	int x;
	printf("Enter Element :");
	scanf("%d",&x);
	if( ((rear+1)%N) == front ){
		printf("overflow dequeue\n");
	}
	else if( front==-1 && rear==-1 ){
		front=rear=0;
		dequeue[rear]=x;
	}
	else if( rear==N-1 ){
		rear=(rear+1)%N;
		dequeue[rear]=x;
	}
	else{
		rear++;
		dequeue[rear]=x;
	}
}
void enqueuefront(){
	int x;
	printf("Enter Element :");
	scanf("%d",&x);
	if( ((rear+1)%N) == front) {
		printf("overflow dequeue\n");
	}
	else if( front==-1 && rear==-1 ){
		front=rear=0;
		dequeue[front]=x;
	}
	else if( front==0 ){
		front=N-1;
		dequeue[front]=x;
	}
	else{
		front--;
		dequeue[front]=x;
	}
}
//-------------------------------------------------------
void dequeuefront(){
	if( front==-1 && rear==-1 ){
		printf("Underflow dequeue\n");
	}
	else if( front==N-1 ){
		printf("\nDequeue Element from Front is----->%d ",dequeue[front]);
		front=(front+1)%N;
	}
	else if( front==rear ){
		printf("\nDequeue Element from Front is----->%d ",dequeue[front]);
		front=rear=-1;
	}
	else{
		printf("\nDequeue Element from Front is----->%d ",dequeue[front]);
    	front++;
	}

}
void dequeuerear(){
		if( front==-1 && rear==-1 ){
		printf("\nUnderflow dequeue\n");
	}
	else if( front==rear ){
		printf("\nDequeue Element from Rear is----->%d",dequeue[rear]);
		front=rear=-1;
	}
	else if( rear==0 && front!=0 ){
	    printf("\nDequeue Element from Rear is----->%d",dequeue[rear]);
		rear=N-1;	
	}
	else if( rear==0 && front==0 ){
		printf("\nDequeue Element from Rear is----->%d",dequeue[rear]);
		front=rear=-1;
	}
	else{
		printf("\nDequeue Element from Rear is----->%d",dequeue[rear]);
	    rear--;
	}
	
}
void getfront(){
	if(front==-1 && rear==-1 ){
		printf("under flow\n");
	}
	else{
		printf("\nFront ------------------->%d",dequeue[front]);
	}
}
void getrear(){
	if(front==-1 && rear==-1 ){
		printf("\nunder flow\n");
	}
	else{
		printf("\nRear------------------->%d",dequeue[rear]);
	}	
}
void display(){
	if( front==-1 && rear==-1 ){
		printf("\nunderflow\n");
	}
	else{
		int i;
		i=front;
		while(i!=rear){
			printf("----------->%d,",dequeue[i]);
			i=(i+1)%N;
		}
	printf("----------->%d,",dequeue[i]);
	}
}
int main(){
	printf("---------------Dequeue Using Circular Queue------------------\n");
	int ch;
	while(1){
	printf("\n");
    printf("1.Enqueue Rear\n2.Enqueue Front\n3.Dequeue Front\n4.Dequeue Rear\n5.Get Front\n6.Get Rear\n7.Display\n8.Exit");
    printf("\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:enqueuerear();
		break;
		case 2:enqueuefront();
		break;
		case 3:dequeuefront();
		break;
		case 4:dequeuerear();
		break;
		case 5:getfront();
		break;
		case 6:getrear();
		break;
		case 7:display();
		break;
		case 8:exit(1);
		break;
		default:
			printf("Invalid choice!");
	}
	}
	
}
