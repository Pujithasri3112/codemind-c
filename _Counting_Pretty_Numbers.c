#include<stdio.h>
int main()
{
    int j,s;
    scanf("%d",&s);
    for(j=1;j<=s;j++)
    {
    int n,i,c=0,l,r;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(i%10==2 || i%10==3 || i%10==9)
        {
            c++;
        }
    }
    
    printf("%d
",c);
    }
}