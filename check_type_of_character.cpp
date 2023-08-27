#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    int y=(int)ch;
    if((y>=65 && y<=90)||(y>=97 && y<=122)) cout<<"The given character is an ALPHABET ";
    else if(y>=48 && y<=57) cout<<"The given character is  a DIGIT ";
    else cout<<"The given character is a SPECIAL CHARACTER ";
}