#include<stdio.h>
# define N 10
int stack[N];
int top=-1;
void push(char x)
{
	top++;
	stack[top]=x;
}
void pop()
{
	top--;
}
int isempty()
{
      if(top==-1){
      	return 1;
	  }
	  else 
	  return 0;
}
int isbalance(char *exp)
{
	int i;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(')
			push(exp[i]);
		else if(exp[i]==')')
		{
			if(isempty())
			{
				return -1;
			}
			else
			{
				pop();
			}
		}
	}
	return isempty()?true:false;
}
int main(){
	//char* exp="((a+b)";
	char exp[10]={'(','(','a','+','b',')'};
	if(isbalance(exp))
	{
		printf("Balanced\n");
	}
	else{
		printf("imbalance");
	}
}
