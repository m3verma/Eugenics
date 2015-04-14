  #include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
    if(a[i]>0)
    sum=sum+a[i];
  }
  printf("The sum of the positive numbers in the array is %d\n",sum);
  
  
  return 0;
}