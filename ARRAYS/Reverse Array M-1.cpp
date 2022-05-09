#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct array{
	int a[10];
	int size;
	int length;
};
void display(struct array arr){
	int i;
	for(i=0;i<arr.length;i++){
		cout<<" "<<arr.a[i];
	}
}
void reverse(struct array* arr){
	int i,j;
	int* b;
	b=new int[10];
	for(i=arr->length-1,j=0;i>=0;i--,j++){
		b[j]=arr->a[i];
	}
	for(i=0;i<arr->length;i++){
		arr->a[i]=b[i];
	}
}

int main(){
	struct array arr={ {10,21,34,2,56,23,67,89,34,70},10,10};
	cout<<" Array before reverse"<<endl;
	display(arr);
	reverse(&arr);
	cout<<endl<<"Array after reverse"<<endl;
	display(arr);
}
