  #include<stdio.h>
int main()
{
    int a,b;
  printf("Enter Year of Birth\n");
  scanf("%d",&a);
  printf("Enter Current year\n");
  scanf("%d",&b);
  if(a<b)
    printf("Your age is %d\n",b-a);
  else if(a==b)
    printf("Your age is 100\n");
    else 
    {
        printf("Your age is %d\n",-1900-a+2000+b);
      
    }
  
  
  
  
  return 0;
}