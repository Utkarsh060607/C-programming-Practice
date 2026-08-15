#include<iostream>
using namespace std;

class Notes{

    int amt, count;

public:
        void input(){

            cout<<"Enter the total amount:";
            cin>>amt;
            
        }

        void check(){

            count = 0;

            if(amt >= 500)
            {
                count += amt/500;
                amt = amt % 500;
            }
            
             if(amt >= 200)
            {
                count += amt/200;
                amt = amt % 200;
            }

             if(amt >= 100)
            {
                count += amt/100;
                amt = amt % 100;
            }

             if(amt >= 50)
            {
                count += amt/50;
                amt = amt % 50;
            }

             if(amt >= 20)
            {
                count += amt/20;
                amt = amt % 20;
            }

             if(amt >= 10)
            {
                count += amt/10;
                amt = amt % 10;
            }

            cout<<"Total number of notes ="<<count;
        }
};

int main(){

    Notes obj;

    obj.input();
    obj.check();

    return 0;
}