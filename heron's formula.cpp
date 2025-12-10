#include<stdio.h>
#include<math.h>
int main() 
{
int a,b,c; 
double s,h; 
scanf ("%d%d%d",&a,&b,&c); 
s=0.5*(a+b+c);
h=sqrt(s*(s-a)*(s-b)*(s-c));
printf( "%.4lf",h);
}
