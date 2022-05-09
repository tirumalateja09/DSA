#include<stdio.h>
#include<iostream>
using namespace std;
struct array{
	int a[10];
	int size;
	int length;
};
void display(  struct array arr){
	int i;
	for(i=0;i<arr.length;i++){
		cout<<" "<<arr.a[i];
	}
	cout<<endl;
 
}
void swap(int* x , int* y){
	int temp = *x;
	*x=*y;
	*y=temp;
}
int lineartransposition( struct array* arr,int key){
	int i;
	for(i=0;i<arr->length;i++){
		if(key==arr->a[i]){
		     if(i==0)
		     return i;
			swap(&arr->a[i],&arr->a[i-1]);
			return i;
		}
		
	}
	return -1;
}

int main(){
	int pos;
	struct array arr={	{1,2,3,4,5,6,7,8},10,8 };
	cout<<" Array before Linear Transposition "<<endl;
	display(arr);
       pos=lineartransposition(&arr,8);
       cout<<endl<<"Element found in Array at Index"<<" "<<pos<<endl;
	cout<<"Array after Linear Transposition"<<endl;
	display(arr);
	return 0;
}
