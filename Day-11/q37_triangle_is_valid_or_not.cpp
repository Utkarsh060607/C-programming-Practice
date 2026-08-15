#include<iostream>
using namespace std;

class angles
{

    int ang1, ang2, ang3;

public:
        void input(){

            cout<<"Enter the First angle: ";
            cin>>ang1;
            cout<<"Enter the second angle: ";
            cin>>ang2;
            cout<<"Enter the third angle: ";
            cin>>ang3;
            
        } 

        void check(){
           
            if( ang1 + ang2 + ang3 == 180 )
            cout<<"The triangle is valid";
            else 
            cout<<"The triangle is not valid";

        }
    
};

int main(){

    angles obj;

    obj.input();
    obj.check();

    return 0;
}