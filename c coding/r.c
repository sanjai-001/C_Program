#include<stdio.h>
int fun(int n)
{
if(n==1)
{
return n;
}
else
{
return n*fun(n-1);
}
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",fun(n));
return 0;
}
