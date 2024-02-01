//WAP to convert a temperature from centigrade to farenheight
#include<stdio.h>
int main()
{
    float tc,tf;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&tc);
    tf=(tc*9/5)+32;
    printf("the temperature in degree farenight: \n");
    printf("%f",tf);
    return 0;
}