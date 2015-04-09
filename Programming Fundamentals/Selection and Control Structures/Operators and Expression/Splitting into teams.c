  #include<stdio.h>
int main()
{
  int nos,not;
    printf("Enter the number of students in the class\n");
  scanf("%d",&nos);
  printf("Enter the number of teams\n");
  scanf("%d",&not);
  printf("The number of students in each team is %d and the number of students left out is %d\n",nos/not,nos%not);
  
  
  return 0;
}