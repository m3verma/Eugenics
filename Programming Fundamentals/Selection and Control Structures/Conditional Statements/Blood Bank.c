  #include<stdio.h>
int main()
{
    int a,w;
  printf("Enter your Age:\n");
  scanf("%d",&a);
  printf("Enter your Weight:\n");
  scanf("%d",&w);
  if(a>18&&w>40)
    printf("Eligible to donate.\n");
  else
    printf("Not Eligible to donate.\n");
  
  
  return 0;
}