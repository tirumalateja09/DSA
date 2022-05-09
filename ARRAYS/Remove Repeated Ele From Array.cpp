#include<stdio.h>
#include<iostream>
using namespace std;
int rduplicate(int arr[],int n){
	if(n==0||n==1){
		return 0;
	}
	int len=0,i;
	for(i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			arr[len++]=arr[i];
		}
	}
	arr[len++]=arr[n-1];
	return len;
}
int main(){
	int n,i,num;
	cout<<"enter array size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter array elements"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array elements before remove duplicates"<<endl;
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	num=rduplicate(arr,n);
	cout<<endl<<"Array elements after removing duplicates"<<endl;
	for(i=0;i<num;i++){
		cout<<" "<<arr[i];
	}
}
