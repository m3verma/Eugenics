  #include<stdio.h>
int main()
{
    int arr[20],n,i,j,k,swap;
  printf("Enter the number of elements in the array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter element %d\n",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Insertion sort.\n");
  printf("array before sorting:\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    for(i=1;i<n;i++)
    {
        j=i;
      while(j>0&&arr[j]<arr[j-1])
      {
          swap=arr[j];
        arr[j]=arr[j-1];
          arr[j-1]=swap;
        j--;
        
      }
      printf("\nAfter Iteration %d\n",i);
      for(k=0;k<n;k++)
        printf("%d ",arr[k]);
    }
printf("\narray after sorting:\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  
  return 0;
}