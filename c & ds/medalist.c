#include<stdio.h>
int main()
{
int s1;
printf("\n enter the values:");
scanf("%d",&s1);
if(s1>=95)
{
printf("\n s1 gold medalist");
}
else if((s1<95)&&(s1>=90))
{
printf("\n s1 silver medalist");
}
else if((s1<90)&&(s1>=85))
{
printf("\n s1 bronze medalist");
}
else
{
    printf("\n average");

}
}
