  #include<stdio.h>
int main()
{
    int n,i,a,fp=0,fn=0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a>=0)
      fp++;
    else
      fn++;
    
  }
  printf("Number of positive numbers entered is %d and the number of negative numbers entered is %d\n",fp,fn);
  
  
  
  return 0;
}