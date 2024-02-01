//WAP to calculate perimeter of a circle.
#include<stdio.h>
int main()
{
    float r,p;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&r);
    p=(2*3.1415)*r;
    printf("the circumference is:\n");
    printf("%f",p);
    return 0;
}