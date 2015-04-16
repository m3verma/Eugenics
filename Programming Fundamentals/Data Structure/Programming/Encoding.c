  #include<stdio.h>
int main()
{
    unsigned char c,r;
  int r1=0,i=2;
  scanf("%c",&c);
  c=c-64;
  if(c>=1&&c<=5)
      r=c*2;
  else if(c>=6&&c<=10)
    r=(c%3)*5;
    else if(c>=11&&c<=15)
      r=(c%4)*8;
      else if(c>=16&&c<=20)
        r=c+10;
        else if(c>=21&&c<=26)
        {
            for(i=2;i<c;i++)
            {
              r1=c%i;
              if(r1==0)
                r=i*12;
            }
        }
  if(r==0)
    r=-29;
  else if(r>26)
  {
    r=r%26;
    if(r==0)
      r=26;
  }
  r=r+64;
  printf("%c",r);
  
  
  
  return 0;
}