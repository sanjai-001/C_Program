#include<stdio.h>
#include<stdlib.h>
 struct runs{
char name[40];
int runs;
};
void main(){
int n;
int totalruns=0;
scanf("%d",&n);
struct runs s[n];
for(int i=0;i<n;i++){
    scanf("%s%d",&s[i].name,&s[i].runs);
}
for(int i=0;i<n;i++){
    printf("%s \n %d \n",s[i].name,s[i].runs);
}
for(int i=0;i<n;i++){
totalruns=totalruns+s[i].runs;}
printf("\n %d",totalruns);
}
