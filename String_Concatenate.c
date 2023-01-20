#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],s1[100],d[100],t;
    int i,j,l;
    scanf("%s",s);
    scanf("%s",s1);
    strcat(s,s1);
    l=strlen(s);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<(l-i-1);j++)
        {
            if(s[j]>s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    puts(s);
}