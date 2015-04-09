  #include<stdio.h>
int main()
{
    int x,y,m,c;
  printf("Enter the value of m\n");
  scanf("%d",&m);
  printf("Enter the value of c\n");
  scanf("%d",&c);
  printf("The line equation is y=%dx+%d\n",m,c);
  x=-c/m;
  y=c;
  printf("The x intercept is %d\n",x);
  printf("The y intercept is %d\n",y);
  printf("The house number is %d\n",x+y);
  
  
  return 0;
}