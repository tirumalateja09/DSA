#include<stdio.h>
#include<Stdlib.h>
#define N 10
int q1[N],q2[N];
int f1=-1,f2=-1,r1=-1,r2=-1;
int  pop1(){
	return q1[f1++];
}
void push1 (int x){
	if( f1==-1 && r1==-1){
		f1=r1=0;
		q1[r1]=x;
	}
	else{
		r1++;
	   q1[r1]=x;
	}
}
int pop2(){
    return q2[r2--];	
}
void  push(){
    int i,j,x;
    printf("Enter Element :");
    scanf("%d",&x);
    if( f2==-1 && r2==-1){
    	 f2=r2=0;
	     q2[r2]=x; 
		int a=pop2();
	    push1(a);  
    	
	}
	else{
		if(f1!=-1 && r1!=-1){
		f2=r2=0;
	   q2[r2]=x;  
		i=f1;
		while(i<=r1){
			r2++;
			q2[r2]=pop1();
			i++;
		}
		j=r1;
		for(i=f2;i<=r2;i++){
			   q1[j]=q2[i];
			   j++;
		}
	} 

}
}
void display(){
	if( f1==-1 && f2==-1){
		printf("underflow\n");
	}
	else{
		int i=f1;
		while(i!=r1){
			printf("%d,",q1[i]);
			i++;
		}
		printf("%d,",q1[i]);
		
	}
}
int pop(){
	if( f1==-1 && r1==-1 ){
		printf("under flow\n");
	}
	printf("pop element is ----->%d",q1[f1++]); 
}
int main(){
	printf("------------------Stacks Using 2 Queues-------------------\n");
	int ch;
	while(1){
		printf("\n1.push\n2.pop\n3.display\n4.peek\n5.Exit\n");
		printf("Enter your Choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
		    break;
		//	case 4:peek();
		//	break;
			case 5:exit(1);
			break;
			default:
				printf("Invalid input\n");
		}
	}
}
