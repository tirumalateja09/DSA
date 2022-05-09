#include<iostream>
using namespace std;
int p(int n,int r){
	if (n==r||r==0)
	return 1;
	return p(n-1,r-1)+p(n-1,r);
}
int main(){
	cout<<p(5,1)<<endl;
}
