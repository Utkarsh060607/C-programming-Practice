#include<iostream>
using namespace std;

class divisibility
{
    int num, rem;

public :

        void checkDiv(){

            cout<<"Enter the number:";
            cin>>num;
            
               }

               void check()
               {
                if(num % 5 == 0 && num % 11 == 0)
                    cout<<"Number is divisible by both 5 and 11";
                else
                    cout<<"Number is not divisible by both 5 and 11";
               }

};

int main()
{
    divisibility obj;

        obj.checkDiv();
        obj.check();

        return 0;
    
}
