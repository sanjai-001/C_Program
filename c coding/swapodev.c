#include<stdio.h>
int odd(int m){
return m;
}
int even(int n){
return n;
}
int sum(int i,int m,int n){
if(i%2!=0){
    return odd(m);
}
if(i%2==0){
    return even(n);
}
}
int main(){
    int a,m,n,b;
scanf("%d",&b);
//for(int i=1;i<=b;i++){
        int i=1;
        while(i<=b){

        m=i+1;
        n=i-1;

    printf("%d ",sum(i,m,n));
     i++;
}
return 0;
}
