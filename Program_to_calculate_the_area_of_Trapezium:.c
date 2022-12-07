#include<stdio.h>
int main()
{
    int b1,b2,h;
    float a;
    scanf("%d%d%d",&b1,&b2,&h);
    a=h*(b1+b2)/2.0;
    printf("%0.4f",a);
}