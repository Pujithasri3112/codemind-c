#include<stdio.h>
int main()
{
    int i,h,m,s;
    scanf("%d",&i);
    h=i/3600;
    m=(i-h*3600)/60;
    s=(i-h*3600-m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}