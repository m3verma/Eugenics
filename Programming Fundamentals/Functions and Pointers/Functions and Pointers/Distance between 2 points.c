  #include<stdio.h>
#include<math.h>
float findDistance(int x1,int y1,int x2,int y2)
{
  float ans;
  x1=x1-x2;
  x1=x1*x1;
  y1=y1-y2;
  y1=y1*y1;
  ans=sqrt(x1+y1);
  return ans;
  
  
}
int main()
{
  int x1,x2,y1,y2;
  float ans;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  ans=findDistance(x1,y1,x2,y2);
  printf("Distance between the 2 points is %.2f\n",ans);
  
  return 0;
}