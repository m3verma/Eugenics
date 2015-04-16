  #include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
  scanf("%d",&n);
  while(1)
  {
      c=a+b;
    if(c>=n)
      break;
    a=b;b=c;
  }
  printf("%d %d",a,b);
  
  
  return 0;
}