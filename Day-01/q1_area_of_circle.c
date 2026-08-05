#include<stdio.h>
int main()
{
    int radius;
    float PI = 3.14, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    circumference = 2 * PI * radius;
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}