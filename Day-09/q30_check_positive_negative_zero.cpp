#include<iostream>
using  namespace std;

class Check
{
    int num;

public:
    void getNumber()
    {
        cout<<"Enter a number:";
        cin>>num;

    }

    void check()
    {
        if(num > 0)
            cout<<"The entered number is positive.";
        else if(num < 0)
            cout<<"The entered number is negative.";
        else 
            cout<<"The entered number is zero.";
    }
};

int main(){
    Check obj;
    obj.getNumber();
    obj.check();

    return 0;

}