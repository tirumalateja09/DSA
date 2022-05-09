#include<iostream>
using namespace std;
template <typename t>
class weight{
	private:
		t kg;
	public:
		void setData( t x){
			kg=x;
		}
	    t getData(){
			return kg;
		}
};
int main(){
	weight <int>w;
	w.setData(10);
	cout<<"Weight of an object is "<<w.getData( )<<endl;
}
