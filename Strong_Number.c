#include<stdio.h>
int main()
{
    int n,i=1,t,r,s=0,b;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        b=1,i=1;
        r=n%10;
        while(i<=r)
        {
            b=b*i;
            i++;
        }
        s=s+b;
        n=n/10;
    }
    if(s==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}