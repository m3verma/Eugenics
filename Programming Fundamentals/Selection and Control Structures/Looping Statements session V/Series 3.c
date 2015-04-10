  #include<stdio.h>
int main()
{
    int n,i,j,flag;
  scanf("%d",&n);
  for(i=2;i<=1000&&n>0;i++)
  {
      flag=0;
      for(j=1;j<i;j++)
      {
       if(i%j==0) 
        flag++;
      }
      if(flag==1)
      {
        printf("%d ",i);
        n--;
      }
    
  }
  
  
  return 0;
}