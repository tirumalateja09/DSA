#include<stdio.h>
int main(){
	int a[50],n,i;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("printing array elements\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
