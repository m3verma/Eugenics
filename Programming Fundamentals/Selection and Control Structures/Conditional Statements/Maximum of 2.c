  #include<stdio.h>
int main()
{
    int a,b;
  scanf("%d%d",&a,&b);
  a=a>b?a:b;
  printf("%d is the maximum number\n",a);
  
  
  return 0;
}