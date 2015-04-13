  #include<stdio.h>
int main()
{
    int arr[100],a,n,i,flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  scanf("%d",&a);
  for(i=0;i<n;i++)
  {
    if(arr[i]==a)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
    printf("%d is present in the array\n",a);
  else
    printf("%d is not present in the array\n",a);
  
  
  return 0;
}