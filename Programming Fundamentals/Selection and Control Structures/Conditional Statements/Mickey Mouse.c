  #include<stdio.h>
int main()
{
    int a;
  printf("Enter the Balloon's number:\n");
  scanf("%d",&a);
  if(a%21==0)
    printf("This balloon can fly to miney.\n");
  else 
    printf("This balloon cannot fly to miney.\n");
  
  
  return 0;
}