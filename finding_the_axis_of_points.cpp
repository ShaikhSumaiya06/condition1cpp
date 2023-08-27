#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the x-axis : ";
    cin>>x;
    cout<<"Enter the y-axis : ";
    cin>>y;
    if(x==0 && y==0) cout<<"points "<<"("<<x<<" , "<<y<<")"<<" lies at the origin .";
    else if(x!=0 && y==0) cout<<"points "<<"("<<x<<" , "<<y<<")"<<" lies on the x-axis.";
    else if(x==0 && y!=0) cout<<"Points "<<"("<<x<<" , "<<y<<")"<<" lies on the y-axis.";
    else if(x!=0 && y!=0) cout<<"Points "<<"("<<x<<" , "<<y<<")"<<" lies on the plane.";
    else cout<<"Invalid points .";
}