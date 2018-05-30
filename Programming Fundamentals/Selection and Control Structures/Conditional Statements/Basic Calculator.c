#include<stdio.h>
int main()
{
  int a,b;
  char c;
  printf("Enter first number : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%d",&b);
  printf("Enter operation to perform ( + , - , * , / , %) : ");
  scanf(" %c",&c);
  switch(c)
  {
    case '+':
      printf("The sum is %d\n",a+b);
      break;
    case '-':
      printf("The difference is %d\n",a-b);
      break;
    case '*':
      printf("The product is %d\n",a*b);
      break;
    case '/':
      printf("The quotient is %d\n",a/b);
      break;
    case '%':
      printf("The remainder is %d\n",a%b);
      break;
    default:
      printf("Invalid Input\n");
  }
  return 0;
}
