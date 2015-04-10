  #include<stdio.h>
int main()
{
    int a,b;
  printf("Enter the value of a\n");
  scanf("%d",&a);
  printf("Enter the value of b\n");
  scanf("%d",&b);
  if(a>=b)
    while(a>=b)
      printf("%d\n",a--);
  else
     while(a<=b)
        printf("%d\n",a++);
   
  
  return 0;
}