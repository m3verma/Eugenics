  #include<stdio.h>
int main()
{
    int a;
    printf("Press a number:\n");
  scanf("%d",&a);
  if(a>0&&a<=100&&a%2==0)
    printf("Doll will sing\n");
  else
    printf("Invalid number\n");
    
  
  
  return 0;
}