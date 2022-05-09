#include<stdio.h>
void insert( int H[], int n){
	int  i=n;
	int temp=H[n];
	while( i>1 && temp > H[i/2] ){
		H[i]=H[i/2];
		i=i/2;
	}
	H[i]=temp;
}
int main(){
	int i,n;
	int A[]={0,10,20,30,25,5,40,35};
    n=sizeof(A)/sizeof(A[0]);
    printf("Size of A is ---%d",n);
	for( i=2;i<=n-1;i++){         // n=7
		insert(A,i);
	}
	printf("\n----Max Heap Elements----\n");
	for(i=1;i<=n-1;i++){
		printf("%d ",A[i]);
	}
}