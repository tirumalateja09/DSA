#include<iostream>
#include<cstdlib>
using namespace std;
int area(int ,int);
int perimeter(int,int);
int main(){
	int length=0,breadth=0;
	cout<<"enter length"<<endl;
	cin>>length;
	cout<<"enter breadth"<<endl;
	cin>>breadth;
	int ar=area(length,breadth);
	int pr=perimeter(length,breadth);
	cout<<"Area of rectangle is :"<<ar<<endl;
	cout<<"Perimeter of rectangle is:"<<pr<<endl;
	return 0;	
}
int area(int length,int breadth){
		return length*breadth;
}
int perimeter(int length,int breadth){
        	return 2*(length+breadth);
}

