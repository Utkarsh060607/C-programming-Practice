#include<iostream>
using namespace std;

int main(){

    char alphabet;

    cout<<"Enter an character:";
    cin>>alphabet;

    if((alphabet>='a' && alphabet<='z') || (alphabet>='A' && alphabet<='Z'))
    cout<<"It is an alphabet";
    else
    cout<<"It is not an alphabet";

    return 0;
}