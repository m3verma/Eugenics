  #include<stdio.h>
int main()
{
    int a;
  scanf("%d",&a);
  a=a%8;
  if(a==1||a==4)
    printf("Lower\n");
  else if(a==2||a==5)
    printf("Middle\n");
    else if(a==3||a==6)
      printf("Upper\n");
    else if(a==7)
      printf("Side Lower\n");
      else if(a==0)
        printf("Side Upper\n");
        else 
          printf("Invalid Entry\n");
  return 0;
}