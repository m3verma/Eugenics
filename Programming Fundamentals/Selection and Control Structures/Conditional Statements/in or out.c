  #include<stdio.h>
int main()
{
    int a,b;
  printf("Enter the number of problems given\n");
  scanf("%d",&a);
  printf("Enter the number of problems solved\n");
  scanf("%d",&b);
  a=a/2;
  if(b>a)
    printf("IN\n");
  else
    printf("OUT\n");
  
  
  
  return 0;
}