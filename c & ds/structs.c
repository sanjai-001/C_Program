#include<stdio.h>
struct employee{
int id;
char name[40];
char address[50];
double phoneno;
};
void main(){
int n;
scanf("%d",&n);
struct employee e[n];
for(int i=0;i<n;i++){
    scanf("%d%s%s%lf",&e[i].id,&e[i].name,&e[i].address,&e[i].phoneno);
}
for(int i=0;i<n;i++){
    printf("%d%s%s%lf",e[i].id,e[i].name,e[i].address,e[i].phoneno);
}
}
