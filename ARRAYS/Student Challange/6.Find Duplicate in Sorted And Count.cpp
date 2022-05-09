#include <iostream>
//#include<stdio.h>
//using namespace std;
int main(){
	int a[10]={1,2,2,2,3,3,3,4,4,5};
	int i,j,n=10;
	for(i=0;i<n-1;i++){
	    	if(a[i] == a[i+1]){
			j=i+1;
			while(a[j]==a[i]) j++;
			printf("%d elements %d times",a[i],j-i);
			printf("\n");
		   // cout<<"Elements"<<a[i]<<"-"<<j-i<<"Times";
		}
		i=j-1;
	}
}
