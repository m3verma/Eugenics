  #include<stdio.h>
int main()
{
  int l,b;
    printf("Enter the length of the ground\n");
  scanf("%d",&l);
  printf("Enter the width of the ground\n");
  scanf("%d",&b);
  printf("The length of the rope needed is %dm\n",2*l+2*b);
  printf("The quantity of carpet needed is %dsqm\n",l*b);
  
  
  
  
  return 0;
}