  #include<stdio.h>
int main()
{
    int a,b,i;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the value of b\n");
  scanf("%d",&b);
  for(i=a;i>=b;i--)
    printf("%d\n",i);
  
  
    return 0;
}