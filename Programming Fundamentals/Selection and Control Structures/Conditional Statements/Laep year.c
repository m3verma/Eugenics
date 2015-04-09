  #include<stdio.h>
int main()
{
    int a;
  scanf("%d",&a);
  if(a%4==0&&a%100!=0)
    printf("%d is a leap year\n",a);
  else if(a%400==0)
    printf("%d is a leap year\n",a);
    else
      printf("%d is not a leap year\n",a);
  
  return 0;
}