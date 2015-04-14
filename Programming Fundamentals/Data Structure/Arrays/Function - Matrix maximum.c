  #include<stdio.h>
#include<stdlib.h>
int findMax(int **a,int m,int n)
{
  int i,j,larg;
  larg=a[0][0];
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      if(larg<a[i][j])
        larg=a[i][j];
      return larg;
}
int main()
{
  int m,n,i,j,larg;
  printf("Enter the number of rows in the matrix\n");
  scanf("%d",&m);
  printf("Enter the number of columns in the matrix\n");
  scanf("%d",&n);
  printf("Enter the elements in the matrix\n");
  int **a=(int **)malloc(m*sizeof(int *));
  for(i=0;i<m;i++)
    a[i]=(int *)malloc(n*sizeof(int));
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    larg=findMax(a,m,n);
  printf("The matrix is\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      printf("%d ",a[i][j]);
    printf("\n");
  }
  printf("The maximum element in the matrix is %d\n",larg);
  return 0;
}