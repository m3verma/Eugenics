  #include<stdio.h>
int factorial(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
    fact=fact*i;
  return fact;
  
}
int main()
{int a,b;
 scanf("%d",&a); 
  b=factorial(a);
 printf("%d\n",b);
  return 0;
}