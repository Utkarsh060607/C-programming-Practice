#include<iostream>
using namespace std;

int main(){
    float sub1, sub2, sub3, sub4, sub5, totalMarks, percentage;

    cout<<"Enter marks of 5 subjects:";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;

    totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (totalMarks / 500) * 100;
    cout<<"Percentage of 5 subjects is:"<<percentage;

    return 0;
}