#include<iostream>// Tailor series using Horners Rule using Loops
using namespace std;
double e(int x,int n){
    	double s=1;
    	for(;n>0;n--){
    		s=1+x/n*s;
		}
		return s;
}
int main(){
	cout<<e(1,10)<<endl;
//	printf("%lf \n",e(1,10));
}
