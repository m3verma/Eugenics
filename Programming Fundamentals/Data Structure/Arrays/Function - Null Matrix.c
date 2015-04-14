  #include<stdio.h>
#include<stdlib.h>
int checkNull(int **a,int m,int n)
{
    int i,j,flag=1;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      if(a[i][j])
        flag=0;
      return flag;
}
int main()
{
  int m,n,**a,j,i;
  printf("Enter the number of rows in the matrix\n");
  scanf("%d",&m);
  printf("Enter the number of columns in the matrix\n");
  scanf("%d",&n);
  a=(int **)malloc(m*sizeof(int *));
  for(i=0;i<m;i++)
    a[i]=(int *)(malloc(n*sizeof(int)));
  printf("Enter the elements in the matrix\n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    printf("The matrix is\n");
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
    printf("\n");
  }
  if(checkNull(a,m,n))
    printf("The matrix is null\n");
  else
    printf("The matrix is not null\n");
  
  return 0;
}