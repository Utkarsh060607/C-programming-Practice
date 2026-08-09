#include<iostream>
using namespace std;

int main(){

    int radius;
    float PI = 3.14, area, circumference;
    cout<<"Enter the radius of the circle:";
    cin>>radius;

    area = PI * radius * radius;
    cout<<"Area of the circle:"<<area<<endl;

    return 0;

}