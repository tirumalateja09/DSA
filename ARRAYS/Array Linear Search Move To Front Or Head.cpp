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
void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int movetofront( struct array* arr, int key){
	int i;
	for(i=0;i<arr->length;i++){
		if(key==arr->a[i]){
			if(i==0)
			return i;
			swap(&arr->a[i],&arr->a[0]);
			return i;
		}
	}
	return -1;
}
int main(){
	int pos;
	struct array arr={ {1,4,2,3,5,6,7,8}, 10,8};
	cout<<"Array Elements before Linear Move To Front Method"<<endl;
	display(arr);
	pos=movetofront(&arr,5);
	cout<<endl<<"Element Found at index-"<<pos<<endl;
	cout<<endl<<"Array Elements after Linear Search Move to front Method"<<endl;
	display(arr);
	return 0;
}
