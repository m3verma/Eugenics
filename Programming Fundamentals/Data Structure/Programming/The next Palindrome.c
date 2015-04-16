  #include<stdio.h>
int main()
{
    int num,palin=0,rem,temp;
  scanf("%d",&num);
  while(num!=palin)
  {
    num=num+1;
    temp=num;
    palin=0;
    while(temp!=0)
    {
      rem=temp%10;
      palin=rem+palin*10;
      temp=temp/10;
    }
  }
  printf("%d",palin);
  
  
  return 0;
}