#include<Stdio.h>
void insert(int H[],int n){
	int temp=H[n],i=n;
	while( i>1 && temp > H[i/2] ){
		H[i]=H[i/2];
		i=i/2;
	}
	H[i]=temp;
}
void deleteheap( int H[], int n ){
	int i,j,x,val;
	val=H[1]; // storing max heap value 
	//x=H[n]; 
    H[1]=H[n]; 
	H[n]=val;    // placing max heap value in free space  or in out of heap	
    i=1,j=i*2;
    while(j < n-1 ) {    // condtion fails when j reaches out of array
	if(H[j+1]>H[j]){
		j=j+1;
	}
	if( H[i] < H[j] ){
		int temp=H[i];   // swap Node with its Child node
		H[i]=H[j];
		H[j]=temp;
		i=j;
		j=j*2; // j reaches left node of i'th node
	}
	else{
		break;
	}
	
	}
}
int main(){
	int i,n;
	int A[]={0,40,35,30,15,10,25,5};
	n=sizeof(A)/sizeof(A[0]);
	for( i=2;i<=n-1;i++){
		insert(A,i);
	}
	for( i=n-1;i>=1;i--){    //n=8, we need n=7
		deleteheap(A,i);
	}
	printf("\n-------Heap Sort------\n");
	for(i=1;i<n;i++){
		printf("%d ",A[i]);
	}
}