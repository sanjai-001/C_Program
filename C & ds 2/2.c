#include<stdio.h>

int main()
{
   int n,m;
   printf("enter the size:");
   scanf("%d",&n);
   printf("enter the size:");
   scanf("%d",&m);
   int a[n] [m],i,j;
   for(i=0;i<n;i++)
    {
    for(j=0; j<m; j++)
    {
        printf("\n enter the elements [%d] [%d] :",i,j);
        scanf("%d",&a[i] [j]);
    }}

   for(i=0;i<n;i++)
    {
    for(j=0; j<m; j++)
    {
      scanf("%d",&a[i] [j]);

    }}
    for(i=0;i<n;i++)
    {
    for(j=0; j<m; j++)
    {
    printf("%d",a[i] [j]);

    }}
return 0;
}

