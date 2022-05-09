#include<iostream>
using namespace std;
int main(){
	int a[11]={1,2,2,1,1,4,4,2,5,1,4};
	int H[6]={0};
	int i,h=5;
	for(i=0;i<11;i++){
		H[a[i]]++;
	}
	for(i=0;i<=h;i++){
		if(H[i]>1){
			cout<<i<<"-Element Repeated-"<<H[i]<<"-Times"<<endl;
		}
	}
}
