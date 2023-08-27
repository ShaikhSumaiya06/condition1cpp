#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter 1st side of the triangle : ";
    cin>>a;
    cout<<"Enter 2nd side of the triangle : ";
    cin>>b;
    cout<<"Enter 3rd side of the triangle : ";
    cin>>c;
    if(a==b&& b==c) cout<<"Equilateral Triangle";
    else if(a==b || b==c || c==a) cout<<"Isosceles Triangle";

    else if(a!=b && b!=c && a!=c) cout<<"Scalene Triangle";
    else cout<<"invalid Triangle";
}
        