#include<stdio.h>

int main()
{
   int n,m;
   printf("enter the size:");
   scanf("%d",&n);
   printf("enter the size:");
   scanf("%d",&m);
   int a[n][m],i,j;

   for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
      printf("enter the elements [%d] [%d] :",j,i);
      scanf("%d", &a[j] [i] );
    }
    }
    for(i=0;i<m;i++)
    {
    printf("\n");
    for(j=0;j<n;j++)
    {
    printf("%d ",a[j][i]);

    }
    }
return 0;
}
