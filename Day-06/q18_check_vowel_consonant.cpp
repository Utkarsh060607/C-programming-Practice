#include<iostream>
using namespace std;

int main(){

    char alphabet;

    cout<<"Enter an alphabet:";
    cin>>alphabet;

    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' ||  alphabet=='I' || alphabet=='O' || alphabet=='U')
    cout<<"The alphabet is a vowel";
    else
    cout<<"The alphabet is a consonant";

    return 0;
}