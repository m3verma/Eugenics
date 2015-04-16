  #include<stdio.h>
#include<math.h>
int main()
{
  int m,n,ma,na,k,a;
  scanf("%d%d%d",&n,&m,&a);
  na=round((float)n/a);
  ma=round((float)m/a);
  k=na*ma;
  printf("\n%d",k);
  return 0;
}