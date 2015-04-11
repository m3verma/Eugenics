  #include<stdio.h>
int main()
{
    char file1[100];
  int count=0;
  char c,ch,ck;
  FILE *fptr;
  printf("Enter the file name\n");
  scanf(" %s",file1);
  fptr=fopen(file1,"r");
  printf("Enter the character to be counted\n");
  scanf(" %c",&c);
  ck=c;
  if(c>=65&&c<=90)
    c=c+32;
  while((ch=getc(fptr)))
  {
     if(ch>=65&&ch<=90)
       ch=ch+32;
    if(ch==EOF)
      break;
    else if(ch==c)
      count++;
    
    
  }
  
  printf("File '%s' has %d instances of letter '%c'.\n",file1,count,ck);
  fclose(fptr);
  
  
  return 0;
}