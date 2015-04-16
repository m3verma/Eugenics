  #include<stdio.h>
int main()
{
  int a[300]={0},b[300]={0},flag=0,i;
  char ac[300],bc[300];
  printf("Enter the first string\n");
  gets(ac);
  printf("Enter the second string\n");
  gets(bc);
  for(i=0;ac[i]!='\0';i++)
    if(ac[i]==' ')
      continue;
    else
      a[(int)ac[i]]++;
    for(i=0;bc[i]!='\0';i++)
      if(bc[i]==' ')
        continue;
      else
        b[(int)bc[i]]++;
   for(i=0;i<300;i++)
   {
       if(a[i]!=b[i])
       {  flag=1;
        break;
       }
     
   }
    if(flag==1)
      printf("%s and %s are not anagrams\n",ac,bc);
  else
    printf("%s and %s are anagrams\n",ac,bc);
    
  
  
  return 0;
}