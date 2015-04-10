  #include<stdio.h>
int main()
{
    int n,sum=0,a,i;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("Enter the number\n");
    scanf("%d",&a);
    sum=sum+a;
    
  }
  printf("The sum is %d\n",sum);
  
  
  
  
  return 0;
}