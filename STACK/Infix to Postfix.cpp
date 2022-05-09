#include<stdio.h>
#include<string.h>
#define N 10
int top=-1;
int stack[N];
push(char x){
	if(top==N-1){//== is comparator and = is assigning...
		printf("\n stack overflow");
	}
	else{
		top++;
		stack[top]=x;
	}
	
}
char  pop(){
	char x;
	if( top==-1){
		printf("underflow\n");
	}
	else{
		 x=stack[top--];
		 return x;
	}
}
int isoperand(char x){
	if(x=='+'|| x=='-'||x=='/'||x=='*'){
		return 0;
	}
	else{
		return 1;
	}
}
int isdigit(char x){
	if(x>=48 && x<=57)
		return 1;
	else
		return 0;
}
int pre(char x){
	if(x=='#')
	return 1;
	else if(x=='+'|| x=='-')
	return 2;
	else if(x=='*'||x=='/')
	return 3;
}

evaluate(char postfix[]){
	char  ch;
	int i=0,x1=0,x2=0;
    while((ch = postfix[i++]) !='\0')
	{
    	if(isdigit(ch))
		{
    		push(ch-'0');
		}
		else
		{
			x2=pop();
			x1=pop();
			switch(ch)
			{
				case '+':
					    push(x1+x2);
					    break;
			    case '-':
				        push(x1-x2);
					    break;
				case '/':
				        push(x1/x2);
						break;	
			    case '*':
			    	    push(x1*x2);
			    	    break;
			}
		}
	}
	printf("\nEVALUATION %d",stack[top]);
}
void convert(char infix[]){
	char postfix[30];
	int i=0,j=0;
	while(infix[i]!='\0'){
		if(isoperand(infix[i])){
			postfix[j++]=infix[i++];
		}
		else{
			if(pre(infix[i])>pre(stack[top])){
				push(infix[i++]);
			}
			else{
				while(pre(infix[i])<=pre(stack[top])){
                  postfix[j++]=pop();					
				}
				push(infix[i++]);
			}
		}
	}
	while(stack[top]!='#'){
		postfix[j++]=pop();
	}
	postfix[j++]='\0';
	printf("Postfix Expression \n %s",postfix);
	evaluate(postfix);
}

int main(){
	char input[30];
	printf("Enter your string:");
	scanf("%s",input);
	push('#');
	convert(input);
	
}
