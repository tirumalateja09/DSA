#include<iostream>
using namespace std;
int main(){
	int a[10]={3,6,8,8,10,12,15,15,15,20};
	int i,n=10;     
	int lastdupli=0;
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]&&a[i]!=lastdupli){
			cout<<"Duplicate Element-"<<a[i]<<endl;
			lastdupli=a[i];
		}
	}
}
