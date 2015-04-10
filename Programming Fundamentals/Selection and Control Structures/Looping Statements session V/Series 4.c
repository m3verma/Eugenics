  #include<stdio.h>
int main()
{
  int n,i,z;
  scanf("%d",&n);
  z=6;
  for(i=1;i<=n;i++)
  {
    
      printf("%d ",z);
    z=z+i*5;
    
  }
  
  
 return 0; 
}