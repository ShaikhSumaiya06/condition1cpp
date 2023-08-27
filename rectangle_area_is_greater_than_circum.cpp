#include<iostream>
using namespace std;
int main(){
    float l , b , a ,p;
    cout<<"Enter the length of the rectangle : ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle : ";
    cin>>b;
    a=l*b;// area
    p=2*(l+b);// perimeter
    if(a>p) cout<<"Area is greater than perimeter .";
    else cout<<"Area is smaller than perimeter .";
}