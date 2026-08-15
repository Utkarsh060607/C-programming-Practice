#include<iostream>
using namespace std;

class Month
{

    int n;

public:
        void input(){

            cout<<"Enter the month number:";
            cin>>n;

        }

        void check(){

            if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
            cout<<"This month contains 31 days";
            else if(n == 4 || n == 6 || n == 9 || n == 11)
            cout<<"This month contains 30 days";
            else if(n == 2)
            cout<<"This month contains 29 days in a leap year and 28 days in non leap year";
            else
            cout<<"Invalid month number";

        }
};

int main(){

    Month  obj;

    obj.input();
    obj.check();

    return 0;

}