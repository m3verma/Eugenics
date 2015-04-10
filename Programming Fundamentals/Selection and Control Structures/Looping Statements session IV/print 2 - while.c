  #include<stdio.h>
int main()
{
    int a,b,i;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the value of b\n");
  scanf("%d",&b);
  i=a;
  while(i>=b)
    printf("%d\n",i--);
  
  
  return 0;
}