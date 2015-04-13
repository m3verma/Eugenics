  #include<stdio.h>
int BinarySearch(int first,int last,int *a,int x)
{
    int mid;
  while(first<=last)
  {
      mid=(first+last)/2;
    if(a[mid]<x)
    {
        first=mid+1;
          continue;
    }
    if(x<a[mid])
    {
        last=mid-1;
      continue;
    }
    return mid;
    
  }
  return -1;
  
}
int main()
{
  int n,i,j,temp,arr[100],lower,upper,search,s;
    printf("\nEnter the number of elements :\n");
  scanf("%d",&n);
  printf("Enter the elements :\n");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  printf("Enter the element to be searched :\n");
  scanf("%d",&search);
  lower=0;
  upper=n;
  for(i=0;i<n-1;i++)
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
  }
  s=BinarySearch(lower,upper,arr,search);
  if(s==-1)
    printf("The element %d is not present in the array\n",search);
  else
    printf("The element %d is in position %d\n",search,s);
  
  
  
  return 0;
}