#include<iostream>
using namespace std;

int main(){

    int day, month, year;
    cout<<"Enter day:";
    cin>>day;
    cout<<"Enter month:";
    cin>>month;
    cout<<"Enter year:";
    cin>>year;

    if(day >= 1 && day <=31 && month >=1 && month <=12 && year >= 1)
        {
            if(month == 2)
            {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                {
                    if(day <= 29)

                        cout<<"Date is correct";
                    else
                        cout<<"Date is not correct";}
                    else

                    {
                        if(day <= 28)
                        cout<<"Date is correct";
                    else
                    cout<<"Date is not correct";
                    }
                }
                else if(month == 4 || month == 6 || month == 9 || month == 11)
                {
                    if(day <= 30)
                         cout<<"Date is correct";
                        else
                        cout<<"Date is not correct";
                }
                else
                {
                    if(day <= 31)
                    cout<<"Date is correct";
                    else
                    cout<<"Date is not correct";

                
                }
                return 0;
                
            }

        }
}