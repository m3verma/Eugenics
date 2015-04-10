  #include<stdio.h>
int main()
{
    int n,a,sum=0,flag=0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  while(n--)
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