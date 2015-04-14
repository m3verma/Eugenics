  #include<stdio.h>
int main()
{
    int a[100],i,n,min;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  min=a[0];
  for(i=0;i<n;i++)
    if(min>a[i])
      min=a[i];
    printf("%d is the minimum element in the array\n",min);
  
  
  return 0;
}