#include<iostream>
using namespace std;

int main(){

    char ch;

    cout<<"Enter the character:";
    cin>>ch;

    if(ch>='A' && ch<='Z')
    cout<<"The character is an uppercase letter";
    else if(ch>='a' && ch<='z')
    cout<<"The character is lowercase letter";
    else if(ch>='0' && ch<='9')
    cout<<"The character is a digit";
    else
    cout<<"The character is a special character";

    return 0;
     
}