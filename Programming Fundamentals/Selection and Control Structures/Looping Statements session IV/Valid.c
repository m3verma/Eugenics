  #include<stdio.h>
int main()
{
  int flag=0,a;
    while(1)
    {
      printf("Enter the number\n");
      scanf("%d",&a);
      if(a%8==0)
      {
        flag++;
      }
      else
        break;
    }
  printf("The number of valid numbers entered is %d\n",flag);
  
  
  return 0;
}