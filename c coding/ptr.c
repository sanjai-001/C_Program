#include<stdio.h>
int sum(int *c,int *d){
 *c=*c+10;
 *d=*d+14;
}
int main()
{
int a,b;
printf("enter the value:");
scanf("%d %d",&a,&b);
int *a1=&a,*b1=&b;
sum(a1,b1);
printf("%d %d",a1,b1);
return 0;

}
