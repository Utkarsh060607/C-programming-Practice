#include<iostream>
using namespace std;

class Armstrong
{

    int n, original, rem, sum = 0;

public:
        void input()
        {
            cout<<"Enter a number:";
            cin>>n;
            original = n;

        }

        void check()
        {
            while(n ! = 0)
            {
                rem = n % 10;
                sum = sum + rem * rem * rem;
                n = n/10;

            }

            if (sum == original)
            cout<<"Armstrong number";
            else
            cout<<"Not an armstrong number";
        }
};

int main()

{
    Armstrong obj;

    obj.input();
    obj.check();

    return 0;

}