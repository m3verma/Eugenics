  #include<stdio.h>
#include<stdlib.h>
#include<string.h>
void replace(char * o_string)
{
  char buffer[200],s_string[4][10]={"yes","you","today","why"},r_string[4][5]={"s","u","2day","y"};
  int i;
    char *ch;
  for(i=0;i<4;i++)
    if((ch=strstr(o_string,s_string[i])))
    {
        strncpy(buffer,o_string,ch-o_string);
      buffer[ch-o_string]=0;
      sprintf(buffer+(ch-o_string),"%s%s",r_string[i],ch+strlen(s_string[i]));
      o_string[0]=0;
      strcpy(o_string,buffer);
      return replace(o_string);
    }
  
}
int main()
{
    char o_string[200];
  gets(o_string);
  replace(o_string);
  printf("\n%s",o_string);
    return 0;
}
