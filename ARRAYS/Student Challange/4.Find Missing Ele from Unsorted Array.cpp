#include<iostream>
using namespace std;
int main(){
	int a[10]={3,7,4,9,12,6,1,11,2,10};
	int l=1,h=12,i;
	int H[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    for(i=0;i<10;i++){
    	H[a[i]]++;
	}
	for(i=l;i<=h;i++){
	    if(H[i]==0){
	    	cout<<"Missing Elements -"<<i<<endl;
		}
	}
}
