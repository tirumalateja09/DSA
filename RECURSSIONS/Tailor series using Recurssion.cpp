// taior series
#include<iostream>
using namespace std;
double e(int x,int n){
	double r;
	static double p=1,f=1;
	if(n==0)
	return 1;
	else
	r=e(x,n-1);
	p=p*x;
	f=f*1;
	return r+p/f;
}
int main(){
    
    cout<<e(5,4)<<endl;
		
}
