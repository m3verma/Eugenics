  #include<stdio.h>
int main()
{
    char s;
  int a,b,c,d;
  scanf(" %c",&s);
  scanf("%d%d%d%d",&a,&b,&c,&d);
  switch(s)
  {
      case 'A':
    printf("The fee to be paid is Rs.%d\n",a*b+c*d);
    break;
     case 'B':
    printf("The fee to be paid is Rs.%d\n",a*b+c*d+5000);
    break;
    case 'C':
    printf("The fee to be paid is Rs.%d\n",a*b+c*d+1500);
    break;
    case 'D':
    printf("The fee to be paid is Rs.%d\n",a*b+c*d+1500+5000);
    break;
    
    
    
    
    
    
  }
  
  
  
  
  return 0;
}