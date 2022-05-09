#include<stdio.h>
#include<Stdlib.h>
struct priorityqueue{
	int ele;
	int priority;
}pq[10];
int front=-1;
int rear=-1;
void enqueue(){
	int e,p;
	printf("\nEnter your Elememnt:");
	scanf("%d",&e);
	printf("\nEnter Priority:");
	scanf("%d",&p);
	if( front==-1 && rear==-1 ){
		front=rear=0;
		pq[rear].ele=e;
		pq[rear].priority=p;
	}
	else{
		rear++;
		pq[rear].ele=e;
		pq[rear].priority=p;
	}
}
int gethighestpriority(){
	int i,p=-1,e=0,m,n;
	for(i=0;i<=rear;i++){
		if(p<pq[i].priority){
			p=pq[i].priority;
			e=pq[i].ele;
		}
	}
	printf("\nHighest Priority Element is--------->%d",e);
	printf("\nHighest priority in the list is----->%d",p);
	return p;
}
void dequeue(){
	int i=0,j=0,p=0,k,x;
	p=gethighestpriority();
	for(i=0;i<=rear;i++){
		if(pq[i].priority){
			k=i;
			x=pq[i].ele;
		}
	}
	printf("\n\nDequeue of Element is----->%d",pq[k].ele);
	printf("\n\nDequeue of Priority is---->%d",pq[k].priority);
	if(k<rear){
		for(j=i;j<rear;j++){
			pq[j].ele=pq[j+1].ele;
			pq[j].priority=pq[j+1].priority;
		}
	}
	rear--;
}
void display(){
	int i;
	for(i=front;i<=rear;i++){
		printf("\n------------>Element-->%d with priority---->%d\n",pq[i].ele,pq[i].priority);
	}
}
int main(){
	printf("-----------------priority Queue Using Arrays---------------");
	int ch;
	while(1){
		printf("\n1.Enqueue\n2.Get Highest Pririority and Element \n3.Dequeue\n4.Display\n5.Exit\n");
		printf("Enter your Choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:enqueue();
			break;
			case 2:gethighestpriority();
			break;
			case 3:dequeue();
			break;
			case 4:display();
			break;
			case 5:exit(1);
			break;
			default:
				printf("Invalid choice!");
		}
	}
	
}
