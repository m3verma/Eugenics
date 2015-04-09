  #include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
 a=a>b?(a>c?a:c):(b>c?b:c);
   printf("%d is the maximum number\n",a);
  
  return 0;
}