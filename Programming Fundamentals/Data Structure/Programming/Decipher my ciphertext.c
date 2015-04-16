  #include<stdio.h>
#include<string.h>
int main()
{
    char pla[50],key[50],cip[50];
  int i,l1,l2;
  gets(pla);
  gets(key);
  l1=strlen(pla);
  l2=strlen(key);
  for(i=0;i<l1;i++)
    pla[i]=pla[i]-64;
  for(i=0;i<l2;i++)
    key[i]=key[i]-64;
  if(l2==l1)
    goto END;
  else if(l1>l2)
  {
    int v=0;
    for(i=l2-1;i<l1-1;i++)
    { key[i+1]=key[v];
     v++;
    }
    goto END;
  }
  else if(l2>l1)
  {
    for(i=l1;i<l2;i++)
      key[l1+1]=' ';
    goto END;
  }
  END: for(i=0;i<l1;i++)
  {
    cip[i]=pla[i]+key[i];
    if(cip[i]>26)
    {
      cip[i]=cip[i]%26;
      if(cip[i]==0)
        cip[i]=26;
    }
  }
  for(i=0;i<l1;i++)
  {
    cip[i]=cip[i]+64;
    printf("%c",cip[i]);
  }
  return 0;
}
