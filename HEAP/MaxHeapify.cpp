#include<stdio.h>
void heapify( int A[],int n,int i ){
	int largest,l,r;
	largest=i;
	r=(2*i)+1;
	l=2*i;
	while( l<=n && A[l] > A[largest] ){
		largest=l;
	}
	while( r<=n && A[r] > A[largest] ){
		largest=r;
	}
	if( largest!=i ){
		int temp;
		temp=A[i];
		A[i]=A[largest];
		A[largest]=temp;
		heapify(A,n,largest);
	}
}
int main(){
	int n,i;
	int A[]={0,15,5,20,1,17,10,30};
	n=sizeof(A)/sizeof(A[0]);
	printf("size of an array is %d\n the half greatest element is %d\n",n,A[(n-1)/2]);
	for(i=(n-1)/2;i>=1;i--){
		heapify(A,7,i);
	}
	for(i=1;i<n;i++){
		printf("%d ",A[i]);
	}
}