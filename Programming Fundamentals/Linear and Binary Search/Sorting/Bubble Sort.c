  #include<stdio.h>
int main()
{
    int n,arr[20],i,j,xchanges,c,temp;
  printf("Enter the number of elements :\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("Enter element %d\n",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Unsorted list is :\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  for(i=0;i<n-1;i++)
  {
      xchanges=0;
    for(j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          xchanges++;
        }
    }
    printf("\nAfter Pass %d elements are :",i+1);
    for(c=0;c<n;c++)
      printf("%d ",arr[c]);
    if(xchanges==0)
      break;
    
  }
  printf("\nSorted list is :\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i] );
  
  
  
  
  return 0;
}