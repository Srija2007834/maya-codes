#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y = x/365;
printf("%d %d",y,(x-(y*365))/7);
    return 0;
}
