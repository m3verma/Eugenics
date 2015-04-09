  #include<stdio.h>
int main()
{
    int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  a=a+b+c;
  a=a/3;
  if(a>=90)
    printf("The grade is A\n");
  else if(a>=80)
    printf("The grade is B\n");
    else if (a>=70)
      printf("The grade is C\n");
      else if(a>=60)
        printf("The grade is D\n");
        else if(a>=50)
          printf("The grade is E\n");
          else
            printf("The grade is F\n");
  
  
  return 0;
}