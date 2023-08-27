#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the x1 & y1 : ";
    cin>>x1>>y1;
    cout<<"Enter the x2 & y2 : ";
    cin>>x2>>y2;
    cout<<"Enter the x3 & y3 : ";
    cin>>x3>>y3;
    int slope12 , slope23 , slope13;
    slope12=(y2-y1)/(x2-x1);
    slope23=(y3-y2)/(x3-x2);
    slope13=(y3-y1)/(x3-x1);
    if(slope12==slope23 && slope12==slope13) cout<<"All 3 points lie on the same line.";
    else cout<<"All 3 points doesn't lie on the same line.";
}