  #include<stdio.h>
int main()
{
    int n,a=20,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",a);
    a=a-i;
  }
  
  
  return 0;
}