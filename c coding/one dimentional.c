#include<stdio.h>

int main()
{
   int n;
   printf("enter the size:");
   scanf("%d",&n);
   int a[n],i;

   for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
return 0;
}





