//finding missing element from non continuoes sorted array
#include<iostream>
using namespace std;
int main(){
	int a[11]={6,7,8,9,10,11,13,14,15,16,17};
    int i,l=a[0],diff=l-0;
    for(i=0;i<11;i++){
        if(a[i]-i!=diff){
        	cout<<"Missing Element is -"<<i+diff<<endl;
        	break;
		}
	}
}
