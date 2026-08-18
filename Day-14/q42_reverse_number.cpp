#include<iostream>
using namespace std;

class Reverse
{

    int n, rev = 0, rem;

public:
        void input()
        {
            cout<<"Enter a number:";
            cin>>n;

        }

        void reverseNumber()
        {
            while(n != 0)
            {
                rem = n % 10;       // remove last digit
                rev = rev * 10 + rem;       //make the reverse number
                n = n/10;           //remove last digit
            }
            cout<<"Reverse ="<<rev;
        }
};

inth main(){
    Reverse obj;

    obj.input();
    obj.reverseNumber();

    return 0;
}