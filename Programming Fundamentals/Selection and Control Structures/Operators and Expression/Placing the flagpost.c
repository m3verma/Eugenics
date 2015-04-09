  #include<stdio.h>
int main()
{
    int x,y,b;
  printf("Enter the x-coordinate of the left bottom vertex\n");
  scanf("%d",&x);
  printf("Enter the y-coordinate of the left bottom vertex\n");
  scanf("%d",&y);
  printf("Enter the length of a side\n");
  scanf("%d",&b);
  printf("The centre of the ground is at (%d,%d)\n",x+b/2,y+b/2);
  
  
  return 0;
}