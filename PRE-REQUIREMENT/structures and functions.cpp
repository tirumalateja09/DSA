#include<iostream>
#include<cstdlib>
using namespace std;
struct rectangle {
	int length;
	int breadth;
};
void intialise(struct rectangle *r,int l,int b){
	r->breadth=b;
	r->length=l;
}
int area(rectangle r){
	return r.length*r.breadth;
}
int perimeter(rectangle r){
	return 2*(r.length+r.breadth);
}
int main(){
	rectangle r={0,0};
	int l,b;
	cout<<"enter length "<<endl;
	cin>>l;
	cout<<"enter breadth"<<endl;
	cin>>b;
	intialise(&r,l,b);
	int ar=area(r);
	int per=perimeter(r);
	cout<<"Area of rectangle "<<ar<<endl<<"Perimeter of rectangle "<<per<<endl;
	
}
