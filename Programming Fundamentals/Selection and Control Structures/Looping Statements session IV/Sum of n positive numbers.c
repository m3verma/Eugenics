  #include<stdio.h>
int main()
{
    int n,sum=0,a,flag=0,i;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      printf("Enter the number\n");
    scanf("%d",&a);
    if(a>=0)
    {
      sum=sum+a;
      flag++;
    }
  }
  printf("Number of positive numbers entered is %d and the sum is %d\n",flag,sum);
  
  
  
  
  
  return 0;
}