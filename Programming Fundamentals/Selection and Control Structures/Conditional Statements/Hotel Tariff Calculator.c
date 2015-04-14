  #include<stdio.h>
int main()
{
    int c;
  int b;
  float a,ans;
  scanf(" %d",&c);
  switch(c)
  {
      case 1:
    case 2:
    case 3:
    case 7:
    case 8:
    case 9:
    case 10:
    scanf("%f%d",&a,&b);
    printf("Hotel Tariff: Rs.%.2f\n",a*b);
    
    
    break;
    case 4:
    case 5:
    case 6:
    case 11:
    case 12:
    scanf("%f%d",&a,&b);
    ans=20*a*b;
    ans=ans/100;
    ans+=a*b;
    printf("Hotel Tariff: Rs.%.2f\n",ans);
    
    
    break;
    default:
    printf("Invalid Input\n");
    
    
    
  }
  
  
  
  
  return 0;
}