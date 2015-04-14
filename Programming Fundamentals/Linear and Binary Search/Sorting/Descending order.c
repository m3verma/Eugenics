  #include<stdio.h>
int main()
{
    int n,c=0,i,arr[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n-1;i++)
  {
      if(arr[i]<arr[i+1])
      {
        c=1;break;
      }
  }
  if(c==1)
    printf("no\n");
  else
    printf("yes\n");
  
  return 0;
}