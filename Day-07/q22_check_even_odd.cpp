#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a number:";
    cin>>n;

    if(n % 2 == 0)
    cout<<"The entered number is even";
    else if(n % 2 != 0)
    cout<<"The entered number is odd";
    else
    cout<<"The given number is zero";

    return 0;
}