#include<iostream>
using namespace std;
int main(){
	int a[8]={1,4,3,10,6,7,1,9}; // a+b=10
	int k=10,i,j,n=8;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				cout<<a[i]<<","<<a[j]<<endl;
			}
			
		}
	}
	
}
