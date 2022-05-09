#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(){
	int x;
	printf("Enter the element to push:");
	scanf("%d",&x);
	if(top==N-1){
		printf("over flow");
	}
	else{
		top++;
		stack[top]=x;
	}
}
void pop(){
	if(top==-1){
		printf("under flow\n");
	}
	else{
		printf("%d - is poped element ",stack[top]);
		top--;
	}
}
void peek(){
	if(top==-1){
		printf("under flow\n");
	}
	else{
		printf(" Top element in stack is ->%d",stack[top]);
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d,",stack[i]);
	}
}
int main(){
	printf("\----------------*Stack using Arrays*--------------------\n");
	int ch;
	do{
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Peek");
		printf("\n4.Display");
		printf("\n5.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			case 5:printf("\nExit\n");
			break;
			default:
                    printf("\nInvalid choice\n");
		}
		
	}while(ch!=5);
}
