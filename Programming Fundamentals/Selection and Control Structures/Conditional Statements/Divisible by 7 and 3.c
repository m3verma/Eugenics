  #include<stdio.h>
int main()
{
    int a;
  scanf("%d",&a);
  if(a%7==0&&a%3==0)
    printf("%d is divisible by both 7 and 3\n",a);
  else
    printf("%d is not divisible by both 7 and 3\n",a);
  
  
  return 0;
}