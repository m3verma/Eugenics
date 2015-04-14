  #include<stdio.h>
int findMax(int n,int a[])
{
 int i,larg;
  larg=a[0];
  for(i=0;i<n;i++)
    if(larg<a[i])
      larg=a[i];
    return larg;
  
}
int main()
{
    int a[100],n,i,larg;
  printf("Enter the number of elements in the array\n");
  scanf("%d",&n);
  printf("Enter the elements in the array\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  larg=findMax(n,a);
  printf("The maximum element in the array is %d\n",larg);
  
  
  return 0;
}