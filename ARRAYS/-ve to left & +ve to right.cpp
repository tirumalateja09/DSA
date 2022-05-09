#include<iostream>
using namespace std;
void swap(int* x, int* y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a[10]={10,11,-2,-4 ,5,-6,3,25,100,-65};
	int n=10;
	int i=0,j=n-1 ;
	while (i<j){
	  while(a[i]<0){
	  	i++;
	  }
	  while(a[j]>=0){
	  	j--;
	  }
	  if(i<j){
	  swap(&a[i],&a[j]);
	  }
}
 int k=0;
 for(k=0;k<n;k++){
 	cout<<" "<<a[k];
 }
}
