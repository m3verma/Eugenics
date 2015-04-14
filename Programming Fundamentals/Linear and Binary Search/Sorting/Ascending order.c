  #include<stdio.h>
int main()
{
    int a[100],n,i,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
    if(a[i]>a[i+1])
    {
      c=1;
      break;
    }
  }
  if(c==1)
    printf("no\n");
  else
    printf("yes\n");
  
  
  
  return 0;
}