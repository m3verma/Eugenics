  #include<stdio.h>
int main()
{
    int a,b,c,d,least;
  printf("Enter the Time Limit:\n");
  scanf("%d",&d);
  printf("Enter the time taken by the first person:\n");
  scanf("%d",&a);
  printf("Enter the time taken by the second person:\n");
  scanf("%d",&b);
  printf("Enter the time taken by the third person:\n");
  scanf("%d",&c);
  least=a<b?(a<c?a:c):(b<c?b:c);
    if(least<=d)
    {
      if(least==a)
        printf("First person wins!!!");
      else if(least==b)
        printf("Second person wins!!!");
        else
          printf("Third person wins!!!");
      
    }
  else
    printf("No person wins:-(");
  
  
  return 0;
}