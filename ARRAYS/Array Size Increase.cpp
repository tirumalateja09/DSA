#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int i;
	int *p=new int[5];
	cout<<"Enter Array Size"<<endl;
	for(i=0;i<5;i++){
		cout<<i<<"-";
		cin>>p[i];
	}
	int *q=new int[10];
	for(i=0;i<5;i++){
		q[i]=p[i];
	}
	delete []p;
	p=q;
	q=NULL;
	for(i=0;i<10;i++){
		cout<<p[i]<<endl;
	}
}
