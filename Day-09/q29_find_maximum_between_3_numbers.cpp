#include<iostream>
using namespace std;

class Maximum
{
    int a, b, c;

public:
    void input()
    {
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter second number:";   
        cin>>b;
        cout<<"Enter third number:";
        cin>>c;
    }

    void findMaximum()
    {
        if(a > b && a > c)
        cout<<"Maximum number is:"<<a;
        else if(b > a && b > c)
        cout<<"Maximum number is:"<<b;
        else if(c > a && c > b)
        cout<<"Maximum number is:"<<c;
        else
        cout<<"All numbers are equal";

    }
};

int main()
{
    Maximum m;
    m.input();
    m.findMaximum();

    return 0;
}


            