#include<Stdio.h>
#include<Stdlib.h>
#define N 10
int pq[N];
int front=-1,rear=-1;
void checkpririority( int x){
	int i=0,j=0;
	for(i=0;i<=rear;i++){
		if(x>=pq[i]){
			for(j=rear+1;j>i;j--){
				pq[j]=pq[j-i];
			}
			pq[i]=x;
			return;
		}
	}
	pq[i]=x;
}
void enqueue(){
	int x;
	printf("Enter your Element:");
	scanf("%d",&x);
	if( rear==N-1 ){
		printf("overflow queue\n");
	}
	else if( front==-1 && rear==-1 ){
		front=rear=0;
		pq[rear]=x;
	}
	checkpririority(x);
	rear++;
}
void dequeue(){
	if( front==-1 && rear==-1 ){
		printf("underflow\n");
	}
	else{
		printf(" dequeue Element is----->%d",pq[front]);
		front++;
	}
}
void display(){
	if( front==-1 && rear==-1 ){
		printf("underflow\n");
	}
	else{
		int i=front;
		for(i=front;i<=rear;i++){
			printf("----------------->%d,",pq[i]);
		}
	}
}
void peek(){
		if( front==-1 && rear==-1 ){
		printf("underflow\n");
	    }
	    else{
	    	printf(" peek element is------>%d",pq[front]);
		}
	
}
int main(){
	printf("-----------------priority Qeueue-------------------\n\n");
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n");
	int ch;
	while(1){
		printf("\nEnter your choice:");
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
				printf("Invalid Choice!");
		}
	}
}
