  #include<stdio.h>
int main()
{
    int n,m,i;
  printf("Enter n\n");
  scanf("%d",&n);
  printf("Enter m\n");
  scanf("%d",&m);
  printf("The multiplication table of %d is\n",n);
  for(i=1;i<=m;i++)
  {
      printf("%d*%d=%d\n",i,n,i*n);
    
  }
  
  
  
  return 0;
}