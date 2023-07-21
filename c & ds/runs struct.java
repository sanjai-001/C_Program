#include<stdio.h>
#include<stdlib.h>
struct totals{
int name;
int runs;
};
void main(){
int n;
int totalruns=0;
scanf("%d",&n);
struct totals s[n];
for(int i=0;i<n;i++){
    scanf("%d%d",&s[i].name,&s[i].runs);
}
for(int i=0;i<n;i++){
    printf("%d \n %d \n",s[i].name,s[i].runs);
}
for(int i=0;i<n;i++){
totalruns=totalruns+s[i].runs;}
printf("\n %d",totalruns);
}
