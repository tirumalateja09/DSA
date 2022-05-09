#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int **a;
	int i,j;
	a=new int*[3];
	a[0]=new int[4];
	a[1]=new int[4];
	a[2]=new int[4];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<i<<j<<"-";
			cin>>a[i][j];
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	
}
