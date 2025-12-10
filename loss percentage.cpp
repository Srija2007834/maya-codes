#include<stdio.h>
#include<math.h>
int main() 
{
int x,y;
scanf("%d%d",&x,&y);
double p;
p=((x-y)*100.0)/x;
printf("%.2lf",p); 
}
