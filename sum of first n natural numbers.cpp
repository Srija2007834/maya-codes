#include<stdio.h>
int main()
{
    int n,i=1,s=0;
    scanf("%d",&n);
    while (i<=n)
    {
        s = s+i;
        i++;
    }
    printf("%d",s);
}
