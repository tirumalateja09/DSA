#include<stdio.h>
int main()
{
 int a[50],n,i;
 printf("enter the size of an array:");
 scanf("%d",&n);
 if(n<=0||n>50){
 	printf("size cant be less than or greater than 50");
 }
 else{
 	int pos;
 	printf("enter the array elements:");
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 printf("\nprinting array elements");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }
	 printf("\nenter the position to delete:");
	 scanf("%d",&pos);
	 if(pos<=0||pos>n){
	 	printf("invalid position !!");
	 }
	 else{
	 	for(i=pos-1;i<=n-1;i++){
	 		a[i]=a[i+1];
		 }
		 n--;
		 for(i=0;i<n;i++){
		 	printf("%d",a[i]);
		 }
	 }
 }
}

