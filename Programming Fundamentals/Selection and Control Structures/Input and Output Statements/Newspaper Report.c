  #include<stdio.h>
int main()
{
    int dead, injured, safe;
  printf("Enter the number of people dead:\n");
  scanf("%d",&dead);
  printf("Enter the number of people injured:\n");
  scanf("%d",&injured);
  printf("Enter the number of people safe:\n");
  scanf("%d",&safe);
  printf("TSUNAMI REPORT OF JAPAN\nThe number of people\n1)Dead:%d\n2)Injured:%d\n3)Safe:%d\nPlease help the people who are suffering!!!\n",dead,injured,safe);
  
  
  
  return 0;
}