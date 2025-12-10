#include<stdio.h>
int main()
{
    int a,b,h;
    float f;
    scanf("%d %d %d",&a,&b,&h);
    f = ((a+b)/2.0)*h;
    printf("%.4f",f);
}
