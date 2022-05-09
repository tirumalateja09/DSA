#include<iostream>
using namespace std;
int main(){
	int a[11]={1,2,2,3,3,3,4,4,4,4,5};
	int H[6]={0,0,0,0,0,0};
	int i;
	for(i=0;i<11;i++){
		H[a[i]]++;
	}
	for(i=0;i<6;i++){
		if(H[i]>1){
			cout<<i<<"-Element Repeated-"<<H[i]<<"Times"<<endl;
		}
	}
}
