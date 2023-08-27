#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Mark of Student A : ";
    cin>>a;
    cout<<"Enter Mark of Student B : ";
    cin>>b;
    cout<<"Enter Mark of Student C : ";
    cin>>c;
    if(a<=b && a<=c) cout<<"A has the least marks.";
    else if(b<=a && b<=c) cout<<"B has the least marks.";
    else cout<<"C has the least marks.";
}