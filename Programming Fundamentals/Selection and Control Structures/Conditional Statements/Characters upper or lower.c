  #include<stdio.h>
int main()
{
    char c;
  scanf("%c",&c);
  if(c>='A' && c<='Z')
    printf("%c is uppercase letter\n",c);
  else if(c>='a' && c<='z')
    printf("%c is lowercase letter\n",c);
    else 
      printf("%c is neither an uppercase or lowercase letter\n",c);
  
  
  return 0;
}