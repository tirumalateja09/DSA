// Tailor series using horners rule using recurssion
#include<iostream>
using namespace std;
double e(int x,int n){
	static double s=1;
	if(n==0){
		return s;
	}
	else
	s=1+x/n*s;
	return e(x,n-1);
}
int main(){
	cout<<e(1,10)<<endl;
}
