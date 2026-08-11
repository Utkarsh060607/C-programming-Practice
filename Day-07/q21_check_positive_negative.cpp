#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a number:";
    cin>>n;

    if(n > 0)
    cout<<"The given number is positive";
    else if(n < 0)
    cout<<"The given number is negative";
    else
    cout<<"Thr givrn number is zero";

    return 0;
    
}