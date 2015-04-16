  #include<stdio.h>
int main()
{
    int i,j,n,a[100],c;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    c=0;
    for(j=0;j<i;j++)
    {
      if(a[i]==a[j])
      {
        c=1;
        break;
      }
    }
    if(c==1)
      printf("0\n");
    else
      printf("%d\n",a[i]);
  }
  return 0;
}