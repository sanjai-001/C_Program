#include<stdio.h>
int main()
{
    int n, m;
    printf(" enter the size:");
    scanf("\n %d %d",&n,&m);
    int array1[n] [m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\n enter the value for first array [%d] [%d]:",i,j);
            scanf(" %d",&array1[i] [j]);
        }
    }
   for(i=0;i<n;i++)
    {
        printf("\n");
    for(j=0;j<m;j++)
    {
        printf("%d",array1[i] [j]);
    }}
    int array2[n] [m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\n enter the value for second array [%d] [%d] :",i,j);
            scanf(" %d",&array2[i] [j]);
        }
    }
   for(i=0;i<n;i++)
    {
        printf("\n");
    for(j=0;j<m;j++)
    {
        printf("%d",array2[i] [j]);
    }}
    int array3[n] [m];
    printf("\n two dimentional sum:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            array3[i] [j] = array1[i] [j] + array2[i] [j];
            printf(" %d",array3[i] [j]);
        }
    }
    return 0;
}

