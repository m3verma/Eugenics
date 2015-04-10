  #include<stdio.h>
int main()
{
    int n,i,j;
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
      for(j=n;j>=i;j--)
        printf("%d ",i);
    printf("\n");
    
    
  }
  
  
  return 0;
}