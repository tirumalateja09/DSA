#include<iostream>
using namespace std;
int main(){
    int rows,colns,i,j;
    cout<<"enter the rows:";
    cin>>rows;
    cout<<"enter the colns:";
    cin>>colns;
    for(i=0;i<rows;i++){
        for(j=0;j<colns;j++){
            if(i==1||i==rows||j==1||j==colns){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            cout<<"\n";
        }
    }
}