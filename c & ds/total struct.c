#include<stdio.h>
struct total{
int id;
int pay;
};
void main(){
int n;
int sum=0;
scanf("%d",&n);
struct total s[n];
for(int i=0;i<n;i++){
    scanf("%d%d",&s[i].id,&s[i].pay);
}
for(int i=0;i<n;i++){
    printf("%d \n %d \n",s[i].id,s[i].pay);
}
for(int i=0;i<n;i++){
sum=sum+s[i].pay;}
printf("\n %d",sum);
}
