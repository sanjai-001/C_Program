#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",(n/10000));
    n = n - ((n/1000) * 1000);

    printf("%d",(n/100));
    n=n-((n/100) * 100);

    printf("%d\n",(n%10));
    return 0;
}
