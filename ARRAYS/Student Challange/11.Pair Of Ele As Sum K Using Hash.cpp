#include<iostream>
using namespace std;
int main(){
	int a[8]={1,6,3,4,7,7,1,9};
	int H[10]={0};
	int i,k=10;
	for(i=0;i<8;i++){
	
		if(H[k-a[i]]!=0){
			cout<<a[i]<<","<<k-a[i]<<endl;
		}
	     H[a[i]]++;

	}
}
