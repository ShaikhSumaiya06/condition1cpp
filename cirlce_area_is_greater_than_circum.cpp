#include<iostream>
using namespace std;
int main(){
    float r, pi=3.1415,a,c ;
    cout<<"Enter the radius : ";
    cin>>r;
    a=pi*r*r;
    c=2*pi*r;
    if(a>c) cout<<"Area is greater than circumference.";
    else cout<<"Circumference is greate than Area.";
    
}