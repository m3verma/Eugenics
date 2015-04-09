  #include<stdio.h>
int main()
{
    char name[25], creatorname[25], purpose[22];
  int memoryspace;
  float speed;
  printf("Enter the Name :\n");
  scanf("%s",name);
  printf("Enter the Creator Name :\n");
  scanf("%s",creatorname);
  printf("Enter the Purpose :\n");
  scanf("%s",purpose);
  printf("Memory Space :\n");
  scanf("%d",&memoryspace);
  printf("Speed :\n");
  scanf("%f",&speed);
  printf("My Details :\n");
  printf("I am the Robot named %s.\n",name);
  printf("I was created by %s.\n",creatorname);
  printf("I am created for the purpose of %s.\n",purpose);
  printf("My memory space is around %dGb and my speed is %.1fTb.\n",memoryspace,speed);
  
  
  
  
  return 0;
}