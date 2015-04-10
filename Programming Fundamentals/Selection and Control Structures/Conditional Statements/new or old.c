  #include<stdio.h>
int main()
{
    int a,b;
  printf("Enter the year of establishment of college 1\n");
  scanf("%d",&a);
  printf("Enter the year of establishment of college 2\n");
  scanf("%d",&b);
  if(a<b)
    printf("College 1 is older\n");
  else 
    printf("College 2 is older\n");
  
  
  
  return 0;
}