#include<iostream>
using namespace std;

class Number
{
    int n;

public:
        void input(){
            cout<<"Enter a number:";
            cin>>n;
        }

        void check(){
            if(n % 2 == 0)
                cout<<"The entered number is even";
            else
                cout<<"The entered number is odd";

        }
};

int main()
    {
        Number obj;

        obj.input();
        obj.check();

        return 0;
    }
