  #include<stdio.h>
int main()
{
    int bird,ans;
  printf("The bird said:\n");
  scanf("%d",&bird);
  ans=bird%10;
  bird=bird/10;
  ans=ans+bird;
  printf("Alice must go in path-%d to find her way to home\n",ans);
  
  return 0;
}