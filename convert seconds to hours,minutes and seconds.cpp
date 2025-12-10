#include<stdio.h>
int main()
{
    int s,x,y,z;
    scanf("%d",&s);
    x = s/3600;
    y = (s-(x*3600))/60;
    z = s-(x*3600)-(y*60);
    printf("H:M:S-%d:%d:%d",x,y,z);
}
