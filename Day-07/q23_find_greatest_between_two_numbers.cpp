#include<iostream>
using namespace std;

int main(){

    int number1, number2, greatest;

    cout<<"Enter first number:";
    cin>>number1;
    cout<<"Enter second number:";
    cin>>number2;

    if (number1 > number2)
        greatest = number1;
    else if(number1 < number2)
        greatest = number2;
    else
        cout<<"Both numbers are equal";

    cout<<"The greatest number is: "<<greatest;
    return 0;
}