  #include<stdio.h>
int main()
{
    char c;
  printf("Enter a character\n");
  scanf("%c",&c);
  if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
  {
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
      printf("Vowel\n");
    else
      printf("Consonant\n");
  }
  else
    printf("Not an alphabet\n");
  
  
  return 0;
}