#include<iostream>
using namespace std;

class Weekdays
{
    int n;

public:
     
    void input()
    {
        cout<<"Enter week number (1-7):";
        cin>>n;

    }

    void check()
    {
        if(n == 1)
            cout<<"Monday";
        else if(n == 2)
            cout<<"Tuesday";
        else if(n == 3)
             cout<<"Wednesday";
        else if(n == 4)
             cout<<"Thursday";
        else if(n == 5)
             cout<<"Friday";
        else if(n == 6)
             cout<<"Saturday";
        else if(n == 7)
            cout<<"Sunday";
        else
             cout<<"Invalid week number.";


    }
};

int main()
{
    Weekdays obj;

    obj.input();
    obj.check();

    return 0;
}