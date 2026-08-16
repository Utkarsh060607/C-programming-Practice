#include <iostream>
using namespace std;

class Triangle
{
    int a, b, c;

public:

    void input()
    {
        cout << "Enter first side: ";
        cin >> a;
        cout << "Enter second side: ";
        cin >> b;
        cout << "Enter third side: ";
        cin >> c;
        
    }

    void check()
    {
        // First checking whether triangle is valid
        if (a + b <= c || b + c <= a || a + c <= b)
        {
            cout << "Invalid Triangle";
        }
        else if (a == b && b == c)
        {
            cout << "Equilateral Triangle";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Isosceles Triangle";
        }
        else
        {
            cout << "Scalene Triangle";
        }
    }
};

int main()
{
    Triangle obj;

    obj.input();
    obj.check();

    return 0;
}