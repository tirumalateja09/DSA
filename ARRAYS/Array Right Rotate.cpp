#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n,i,k,j,temp;
	cout<<"enter array size"<<endl;
	cin>>n;
	int a[n];
	cout<<endl<<"enter array elements"<<endl;
	for(i=0;i<n;i++){
		cout<<i<<"-";
		cin>>a[i];
	}
	cout<<"array elements"<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<<endl<<"enter the number of rotations"<<endl;
	cin>>k;
	while(k>0){
		temp=a[n-1];
		for(i=n-1;i>0;i--){
			a[i]=a[i-1];
		}
		a[0]=temp;
		k--;
	}
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}

}
