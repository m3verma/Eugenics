  #include<stdio.h>
int main()
{
    int a,b,copy;
  printf("Enter the number of copies sold\n");
  scanf("%d",&copy);
  printf("Enter the cost of 1 copy of the newspaper\n");
  scanf("%d",&a);
  printf("Enter the cost spent by the agency on 1 copy of the newspaper\n");
  scanf("%d",&b);
  
  printf("The profit obtained is Rs.%d",a*copy-b*copy-100);
  
  
  return 0;
}