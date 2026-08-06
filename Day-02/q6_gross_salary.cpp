#include<iostream>
using namespace std;

int main(){
    float basicSalary, hra, da, grossSalary;

    cout<<"Enter the basic salary:";
    cin>>basicSalary;

    hra = 0.2 * basicSalary;

    da = 0.5 * basicSalary;

    gross salary = basicSalary + hra + da;

    cout<<"HRA ="<<hra;
    cout<<"DA ="<<da;
    cout<<"Gross Salary ="<<grossSalary;

    return 0;
    
}