  #include<stdio.h>
int main()
{
  int n,arr[100],i,j,temp,z;
  printf("Enter the number of elements in the array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("Enter element %d\n",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Selection sort.\n");
  printf("array before sorting:\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  
  printf("\n");
  for(i=0;i<n;i++)
  {
      
    for(j=i+1;j<n;j++)
    {
     if(arr[i]>arr[j])
     {
         temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       
     }
    }
      
      
      
    printf("After Iteration %d\n",i+1);
    for(z=0;z<n;z++)
      printf("%d ",arr[z]);
    printf("\n");
    
  }
  
  printf("array after sorting:\n");
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
  
  
  
  return 0;
}