  #include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
  float x,y;
  printf("Enter x1\n");
  scanf("%d",&x1);
  printf("Enter y1\n");
  scanf("%d",&y1);
  printf("Enter x2\n");
  scanf("%d",&x2);
  printf("Enter y2\n");
  scanf("%d",&y2);
  x=x1+x2;
  x=x/2;
  y=y1+y2;
  y=y/2;
  printf("Binoy's house is located at (%.1f , %.1f)\n",x,y);
  
  
  
  return 0;
}