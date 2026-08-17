#include<iostream>
#include<cmath>
using namespace std;

class Sample
{
            float a, b, c, d, root1, root2;

public:
         void input(){

            cout<<"Enter a:";
            cin>>a;
            cout<<"Enter b:";
            cin>>b;
            cout<<"Enter c:";
            cin>>c;
            
         }

         void findRoots(){
            
            d = b * b - 4 * a *  c;

            if(d > 0){             
            root1 = (-b + sqrt(d))/(2 * a);
            root2 = (-b - sqrt(d))/(2 * a);

            cout<<"Root 1 is: "<<root1<<endl;
            cout<<"Root 2 is:"<<root2<<endl;
         }

            else if(d == 0){

            root1 = (-b)/(2 * a);

            cout<<"Both roots are equal :"<<root1<<endl;
            }

            else{

                cout<<"Roots are imaginary";

            }
         }
};

int main(){

    Sample obj;

    obj.input();
    obj.findRoots();

    return 0;
}