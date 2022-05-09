#include<iostream>
using namespace std;
int main(){
	int a[11]={6,7,8,9,11,12,15,16,17,18,19};
	int i,l=a[0],diff=a[0]-0;
	for(i=0;i<11;i++){
		if(a[i]-i != diff){
			while(diff<a[i]-i){
				cout<<"Missing Element is-"<<i+diff<<endl;
				diff++;
			}
		}
	}
}
