#include<stdio.h>
int main()
{
    int n,i,j,ar[500],c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
    for(j=0;j<n;j++)
    {
        if(ar[i]==ar[j])
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("%d",ar[i]);
    }
    }
    return 0;
    
}