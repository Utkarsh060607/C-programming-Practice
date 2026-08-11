#include<iostream>
using namespace std;

int main(){

    int a, b, c, greatest;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    if(a > b && a > c)
        greatest = a;
    else if(b > a && b > c)
        greatest = b;
    else if(c > a && c > b)
        greatest = c;
    else
        cout<<"All numbers are equal";
    cout<<"The greatest number is: "<<greatest<<endl;
    return 0;
}