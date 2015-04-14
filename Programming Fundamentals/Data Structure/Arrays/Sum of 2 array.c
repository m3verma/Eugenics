  #include<stdio.h>
int main()
{
    int a[20],b[20],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      scanf("%d",&b[i]);
    a[i]+=b[i];
  }
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
  
  
  return 0;
}