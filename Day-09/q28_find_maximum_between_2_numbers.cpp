#include<iostream>
using namespace std;

class Maximum
{
    int a, b;

public:
    void input()
        {
            cout<<"Enter first number:";
            cin>>a;
            cout<<"Enter second number:";
            cin>>b;
        }
        
        void findMaximum()
        {
            if(a > b)
                 cout<<"Maximum number is:"<<a;
            else if(b > a)
                 cout<<"Maximum number is:"<<b;
            else
                 cout<<"Both numbers are equal";
        }

    
};

int main()
{
    Maximum m;
    m.input();
    m.findMaximum();

    return 0;
    
}