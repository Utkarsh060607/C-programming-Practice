#include<iostream>
#include<string>
using namespace std;

int main(){
        string firstName, lastName;

        cout<<"Enter your first name:";
        cin>>firstName;

        cout<<"Enter your last name:";
        cin>>lastName;

        cout<<"Abbreviated Name:"<<firstName[0]<<"."<<lastName;

        return 0;
}