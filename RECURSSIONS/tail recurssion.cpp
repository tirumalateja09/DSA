#include<stdio.h>
#include<iostream>
using namespace std;
int tail(int a){
	if(a>0){
	cout<<a<<endl;
	tail(a-1);
	cout<<a<<endl;
	}

}
int main(){
	// recurssions
	int y, x=3;
	y=tail(3);
//	cout<<y<<endl;
}
