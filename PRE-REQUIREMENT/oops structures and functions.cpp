#include<iostream>
using namespace std;
class rectangle{
	public:
	int length;
	int breadth;
  void intialise(int l,int b){
  	   length=l;
  	   breadth=b;
  }
  int area(){
  	return length*breadth;
  }
  int perimeter(){
  	return 2*(length+breadth);
  }
};
int main(){
    rectangle r;
	int l,b;
	cout<<"enter l"<<endl;
	cin>>l;
	cout<<"enter b"<<endl;
	cin>>b;
	r.intialise(l,b);
	int ar=r.area();
	int pr=r.perimeter();
	cout<<"Area of rectangle="<<ar<<endl<<"Perimeter of rectangle="<<pr<<endl;
}
