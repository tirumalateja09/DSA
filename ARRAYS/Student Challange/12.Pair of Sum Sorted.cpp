#include<iostream>
using namespace std;
int main(){
	int a[10]={1,3,4,5,6,8,9,10,12,14};
	int i,j,k=10,n=10;
	for(i=0,j=n-1;i<j;){
		if(a[i]+a[j]==k){
			cout<<a[i]<<","<<a[j]<<endl;
			i++;
			j--;
		}
		else if(a[i]+a[j]>k){
			j--;
		}
		else
		i++;
	}
}
