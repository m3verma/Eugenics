  #include<stdio.h>
int main()
{
  int n,b[100],a[200],i,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
   scanf("%d",&b[i]);
    if(a[i]<b[i])
      c=1;
  }
  if(c==1)
    printf("Incompatible");
  else
    printf("Compatible");
  
  
  
  
  return 0;
}