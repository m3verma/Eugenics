  #include<stdio.h>
int main()
{
    int n,a,sum=0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  while(n--)
  {
    printf("Enter the number\n");
      scanf("%d",&a);
    sum=sum+a;
  }
  printf("The sum is %d\n",sum);
  return 0;
}