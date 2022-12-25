#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0,t,i,d;
    scanf("%d",&n);
    t=n;
    d=log10(n)+1;
    for(i=d;i>=1;i--)
    {
        r=n%10;
        s=s+pow(r,i);
        n=n/10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}