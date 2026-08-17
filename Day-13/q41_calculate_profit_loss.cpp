#include<iostream>
using namespace std;

class Sample 
{
    int cp, sp;

public:
        void input(){

            cout<<"Enter cost price: Rs.";
            cin>>cp;
            cout<<"Enter selling price: Rs.";
            cin>>sp;
        }

        void calculate(){

        if(sp > cp)
        cout<<"Profit = Rs. "<<sp - cp;
    
        else if(cp > sp)
        cout<<"Loss = Rs. "<<cp - sp;
    
        else
        cout<<"NO profit NO loss";
    
         }
};

int main(){

    Sample obj;

    obj.input();
    obj.calculate();

    return 0;
}