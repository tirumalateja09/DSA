#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int breadth;
    public:
    	rectangle(){
    		length=0;
    		breadth=0;
		} 
		rectange(int l, int b){
			length=l;
			breadth=b;
		}
		int area(){
			return length*breadth;
		}
		int perimeter(){
			return 2*(length+breadth);
		}
		void setlength( int l){
			length=l;
		}
		void setbreadth( int b){
			breadth=b;      
		}
		int getlength(){
			return length;
		}
		int getbreadth(){
			return breadth;
		}
		~rectangle(){
			cout<<"distructure";
		}
};
 
 int main(){
 	rectangle r(10,5);
 	cout<<"Area of rectangle"<<r.area()<<endl;
 	cout<<"Perimeter of rectangle"<<r.perimeter()<<endl;
 	setlength(20);
 	cout<<getlength()<<endl;
 }
