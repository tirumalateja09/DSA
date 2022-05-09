#include<iostream>
#include<stdio.h>
using namespace std;
int fib(int n){
    if(n<=1)
    	return n;
        return fib(n-2)+fib(n-1);
	
}
int main(){
	int x;
	cout<<"Enter the number"<<endl;
	cin>>x;
	cout<<"fib term is "<<fib(x)<<endl;
}
