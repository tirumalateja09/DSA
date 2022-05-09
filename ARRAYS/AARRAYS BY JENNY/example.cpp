#include<stdio.h>
int main()
{
 int i,a[5]={1,2,3,4,5};
 int *q;
 q=a;
 for(i=0;i<5;i++){
 	printf("%d ",&q[i]);
 }
}

