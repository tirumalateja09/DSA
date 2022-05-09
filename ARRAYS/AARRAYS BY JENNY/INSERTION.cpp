#include<stdio.h>
int main()
{
 int a[50],n,i;
 printf("enter the size of an array:");
 scanf("%d",&n);
 if(n<=50){
 printf("array elelments");
 for(i=0;i<n;i++){
 	scanf("%d",&a[i]);
 }
 printf(" \nprinting array elements\n");
 for(i=0;i<n;i++){
 	printf("%d",a[i]);
 }
 int num,pos;
 printf("\nenter the  number to insert:");
 scanf("%d",&num);
 printf("\nenter the position to be insert :");
 scanf("%d",&pos);
 if(pos>0||pos<=n){
     int i;
	 for(i=n-1;i>=pos-1;i--){
	 	a[i+1]=a[i];
	 }
	 a[pos-1]=num;
	 n++;
	 printf("printing array elelments after inserting a new element\n");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }
 }
 else{
  printf("Entered position can not be processed because the array is a static ");	
 }
}
 else{
 	printf("user input size exceeding the limit !!!");
 }
 

}


