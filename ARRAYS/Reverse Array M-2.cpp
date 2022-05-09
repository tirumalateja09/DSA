#include<iostream>
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
void swap(int *x,int* y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void reverse(struct array* arr){
	int i,j;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	swap(&arr->a[i],&arr->a[j]);
}
int main(){
	struct array arr={ {10,20,30,40,50,60,70,80,90,100},10,10};
	cout<<" Array before reverse"<<endl;
	display(arr);
	reverse(&arr);
	cout<<endl<<"Array after reverse"<<endl;
	display(arr);
}
