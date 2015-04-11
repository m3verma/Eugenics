  #include<stdio.h>
int checkLucky(char *a)
{
  int sum=0,i;
  for(i=0;a[i]!='\0';i++)
    sum=sum+a[i];
  if(sum%2==0)
    return 1;
  else
    return 0;
  
  
}
int main()
{
  int b;
  char a[100];
  printf("Enter the input string\n");
  scanf("%s",a);
  b=checkLucky(a);
  if(b==1)
  printf("%s is lucky\n",a);
    else
      printf("%s is not lucky\n",a);
  
  
  return 0;
}