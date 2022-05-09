#include<iostream>
using namespace std;
int main(){
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int n=10,i;
	
	int k=2,j;
	
	for(j=0;j<k;j++){
		int temp=a[0],i;
			for(i=0;i<n;i++){
		    a[i-1]=a[i];
	}
	a[n-1]=temp;
	}

	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	
}
