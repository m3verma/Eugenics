  #include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
  float x;
  printf("Enter sale in first month\n");
  scanf("%d",&s1);
  printf("Enter sale in second month\n");
  scanf("%d",&s2);
  printf("Enter sale in third month\n");
  scanf("%d",&s3);
  printf("Enter sale in fourth month\n");
  scanf("%d",&s4);
  printf("Enter sale in fifth month\n");
  scanf("%d",&s5);
  printf("Enter the average sales in 6 months\n");
  scanf("%f",&x);
  printf("The sale in the sixth month is Rs.%.2f\n",x*6-s1-s2-s3-s4-s5);
  
  
  return 0;
}