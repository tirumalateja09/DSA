#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	int a[n];
	int i,ele,pos;
	cout<<"Enter array size"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<i<<"-";
		cin>>a[i];
	}
	cout<<"Array of elements is"<<endl;
		for(i=0;i<n;i++){
            cout<<" "<<a[i];
	}
	cout<<endl;
	cout<<"enter the element to enter "<<endl;
	cin>>ele;
	cout<<"enter the position to enter"<<endl;
	cin>>pos;
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=ele;
	cout<<"Array is"<<endl;
	for(i=0;i<=n;i++){
            cout<<" "<<a[i];
	}
	
}
