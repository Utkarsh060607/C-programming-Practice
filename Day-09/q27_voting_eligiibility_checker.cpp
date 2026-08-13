#include<iostream>
using namespace std;

class Voter
{
    int age;

public:
    void getAge()
    {
        cout<<"Enter your age:";
        cin>>age;
    }

    void checkEligibility()
    {
        if(age >= 18)
        cout<<"You are eligible to vote";
        else
        cout<<"You are not eligible to vote";
    }
    
};

int main()
{
    Voter v;
    v.getAge();
    v.checkEligibility();

    return 0;
}