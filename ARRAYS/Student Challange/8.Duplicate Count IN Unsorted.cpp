#include<iostream>
using namespace std;
int main(){
	int a[11]={1,2,5,2,2,2,6,1,1,8,5};
	int i,j,count,n=11;
	for(i=0;i<n-1;i++){
		count=1;
		if(a[i]!=-1){
			for(j=i+1;j<n;j++){
				if(a[j]==a[i]){
					count++;
					a[j]==-1;
				}
			}
			cout<<a[i]<<"-Element Repeated-"<<count<<"-Times"<<endl;
		}
	}
}
