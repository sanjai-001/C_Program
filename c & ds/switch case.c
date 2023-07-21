#include<stdio.h>
int main()
{
int a,b,choice;
printf("\n enter a numbers:");
scanf("%d",&a);
printf("\n enter a number:");
scanf("%d",&b);
printf("\n\t addition \n\t sub \n\t multiply \n\t divide \n\t modulo");
printf("\n enter a choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("%d + %d = %d",a, b,  a+b );
break;
}
case 2:
{
printf("%d - %d = %d",a, b, a-b);
break;
}
case 3:
{
printf("%d * %d = %d",a, b, a*b);
break;
}
case 4:
{
printf("%d \ %d = %d",a, b, a/b);
break;
}
case 5:
{
printf("%d %% %d = %d",a, b, a%b);
break;
}
default:
{
printf(" enter a invalid state");
}}}
