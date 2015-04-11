  #include<stdio.h>
int main()
{
  char s[1000],s2[1000],a;
    FILE *fp1,*fp2;
  printf("Enter the input file name\n");
  scanf("%s",s);
  printf("Enter the output file name\n");
  scanf("%s",s2);
  fp1=fopen(s,"r");
  fp2=fopen(s2,"w");
  
  while((a=getc(fp1))!=EOF)
  
    putc(a,fp2);
  
    
    
  
  
  
  fclose(fp1);
  fclose(fp2);
  
  
  return 0;
}