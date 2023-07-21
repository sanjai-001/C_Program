#include<stdio.h>
int main()
{
int a,b,choice;
printf("\n enter a numbers:");
scanf("%d",&a);
printf("\n enter a number:");
scanf("%d",&b);
printf("\n\t addition \n\t sub \n\t multiply \n\t divide \n\t modulo");
int c=a+b;
int d=a-b;
int e=a*b;
int f=a/b;
int g=a%d;

printf("\n enter a choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
{
printf("\n addition = %d",c );
break;
}
case 2:
{
printf("\n sub = %d",d );
break;
}
case 3:
{
printf("\n multiply = %d",e );
break;
}
case 4:
{
printf("\n divide = %d",f);
break;
}
case 5:
{
printf("\n modulo = %d",g);
break;
}
default:
{
printf(" enter a invalid state");
}}}
