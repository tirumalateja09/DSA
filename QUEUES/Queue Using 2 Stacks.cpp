#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N];
int s2[N];
int top1=-1;
int top2=-1;
int count=0;
void push1(int x){
	if(top1==N-1){
		printf("Overflow\n");
	}
	else{
		top1++;
		s1[top1]=x;
	}
}
int pop1(){
	if(top1==-1){
		printf("underflow\n");
	}
	else{
		return s1[top1--];
	}
}
int push2(int x){
    if(top2==N-1){
    	printf("overflow\n");
	}
	else{
		top2++;
		s2[top2]=x;
	}
}
int pop2(){
	if(top2==-1){
		printf("underflow\n");
	}
	else{
		return s2[top2--];
	}
}
void enqueue(){
	int x;
	printf("Enter your Element:");
	scanf("%d",&x);
	push1(x);
	count++;
}
void dequeue(){
	if(top1==-1){
		printf("underflow\n");
	}
	else{ 
	    int i,a;
	for(i=0;i<count;i++){
		a=pop1();
		push2(a);
	}
	int b=pop2();
	printf("dequeue element is----->%d",b);
	count--;
    for(i=0;i<count;i++){
    	a=pop2();
    	push1(a);
	}
	}
}
void display(){
	if(top1==-1){
		printf("under flow");
	}
	else{
		int i;
		for(i=0;i<count;i++){
			printf("-------->%d,",s1[i]);
		}
	}
}
void peek(){
	if(top1==-1){
		printf("Underflow\n");
	}
	else{
		printf("peek element is --->%d",s1[0]);
	}
}
int main(){
	printf("-----------------------Queues using two stacks----------------------");
	int ch;
	while(1){
		printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.peek\n5.Exit");
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
				printf("Invalid choice!");
		}
	}
}
