#include<iostream>
using namespace std;
void mergearray(int a[],int b[],int c[],int n,int m){
	int i=0,k=0,j=0;
	while(i<n&&j<m){
		if(a[i]<b[j]){
			c[k++]=a[i++];
		}
		else
		c[k++]=b[j++];
	}
	while(i<m){
		c[k++]=a[i];
		i++;
	}
	while(j<n){
		c[k++]=b[j];
		j++;
	}
}
int main(){
	int a[]={1,3,5,7};
	int b[]={2,4,6,8};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	int c[n+m],i;
	mergearray(a,b,c,n,m);
	cout<<"Array after merging"<<endl;
	for(i=0;i<n+m;i++){
		cout<<c[i]<<" ";
	}
}
