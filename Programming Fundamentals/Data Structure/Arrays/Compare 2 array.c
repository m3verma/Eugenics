  #include<stdio.h>
int main()
{
    int a[100],n,i,b[100],c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      scanf("%d",&b[i]);
    if(a[i]!=b[i])
      c=1;
  }
  if(c==1)
    printf("no\n");
  else
    printf("yes\n");
  
  
  return 0;
}