#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int t1=0,t2=1;
    int nextTerm=t1+t2;
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;++i)
    {
        printf("%d ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}