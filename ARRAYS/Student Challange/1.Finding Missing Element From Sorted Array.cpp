// Finding missing Element from sorted array
#include<iostream>
using namespace std;
int main(){
	int a[11]={1,2,3,4,5,6,8,9,10,11,12};
	int sum=0,i,s,n=12;
	for(i=0;i<11;i++){
		sum=sum+a[i];
	}
	s=(n*(n+1))/2;
	if(s!=sum){
		cout<<"missing element is-"<<s-sum;
	}
	
}
