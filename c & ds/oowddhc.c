#include<stdio.h>
int main()
{
    int num,p=5,sum=0;
    scanf("%d",&num);
    while(num!=0)
    {
        if(num%5==0)
        sum+=num/p;
        num/=5;
    }
    printf("%d",sum);
}
