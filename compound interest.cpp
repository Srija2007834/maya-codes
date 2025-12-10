#include<stdio.h>
#include<math.h>
int main()
{
  int p,r,t;
  float c;
  scanf("%d%d%d",&p,&r,&t);
  c = (p*pow(((1+(double)r/100)),(double)t))-p;
  printf("%.2f",c);
}
