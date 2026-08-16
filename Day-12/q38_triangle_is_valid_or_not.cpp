#include<iostream>
using namespace std;

class sides
{
    int a, b, c;

public:

    void input()
    {
        cout<<"Enter three sides of triangle:";
        cin>>a>>b>>c;

    }

    void check()
    {
        if(a > 0 && b > 0 && c > 0 &&
            a + b > c &&
            b + c > a && 
            a + c > b )
        cout<<"The triangle is valid";

        else
        cout<<"The triangle is not valid";

    }
};

int main()
{
    sides obj;

    obj.input();
    obj.check();

    return 0;
}

