  #include<stdio.h>
#include<math.h>
int main()
{
  int x1,x2,x3,y1,y2,y3,x,y;
  float ab,bc,ac;
    printf("Enter the x-coordinate of vertex A\n");
  scanf("%d",&x1);
  printf("Enter the y-coordinate of vertex A\n");
  scanf("%d",&y1);
  printf("Enter the x-coordinate of vertex B\n");
  scanf("%d",&x2);
  printf("Enter the y-coordinate of vertex B\n");
  scanf("%d",&y2);
  printf("Enter the x-coordinate of vertex C\n");
  scanf("%d",&x3);
  printf("Enter the y-coordinate of vertex C\n");
  scanf("%d",&y3);
  x=x1-x2;
  x=x*x;
  y=y1-y2;
  y=y*y;
  ab=sqrt(x+y);
  printf("Length of side AB is %.1f\n",ab);
  x=x2-x3;
  x=x*x;
  y=y2-y3;
  y=y*y;
  bc=sqrt(x+y);
  printf("Length of side BC is %.1f\n",bc);
  x=x1-x3;
  x=x*x;
  y=y1-y3;
  y=y*y;
  ac=sqrt(x+y);
  printf("Length of side AC is %.1f\n",ac);
  
  
  
  return 0;
}