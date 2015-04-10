  #include<stdio.h>
int main()
{
  int n,a,fp=0,fn=0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  while(n--)
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