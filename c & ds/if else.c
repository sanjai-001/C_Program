#include<stdio.h>
int main()
{
int n1,n2,ret1,ret2;
printf("\n enter two numbers:");
scanf("%d%d",&n1,&n2);
ret1=((n1>n2)||(n1!=n2));
if( ret1=1){
printf("\n condition 1 is true");}
else{
printf("\n condition 1 is false");
}
ret2=((n1==n2)&&(n1<=n2));
if(ret2=1){
printf("\n condition 2 is true");}
else{
printf("\n condition 2 is false");}
return 0;

}
