#include<iostream>
using namespace std;

class Year
{
    int date, month, year;

public:

     void input(){
        cout<<"Enter date:";
        cin>>date;
        cout<<"Enter month:";
        cin>>month;
        cout<<"Enter year:";
        cin>>year;

     }

     void check(){
      
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            cout<<"The entered date comes under a leap year";
        else
            cout<<"The entered date doesn't comes under a leap year";

     }
};
 
int main(){

    Year obj;
     
    obj.input();
    obj.check();

    return 0;
}