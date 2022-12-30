#include<stdio.h>
int main()
{
    int n,m,i,j,q,s=0,r;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        q=i;
        s=0;
         while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=(s*10)+r;
    }
    if(s==i)
    {
        printf("%d ",i);
    }
    }
    
}