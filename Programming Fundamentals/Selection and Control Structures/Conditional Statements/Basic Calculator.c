  #include<stdio.h>
int main()
{
    int a,b;
  char c;
  scanf("%d",&a);
  scanf(" %c",&c);
  scanf("%d",&b);
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