#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void disp(void);
int main()
{
//clrscr();

top=-1;
printf("\n enter the size of the stack [max=100]: ");
scanf("%d ",&n);
printf("\n \t stack operation using array:");
printf("\n\t ----------------------------");
printf("\n\t 1.push \n\t 2.pop \n\t 3.disp \n\t 4.exit");
do
{
printf("\n enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:{
push();
break;}

case 2:{
 pop();
break;}

case 3:{
disp();
break;}

case 4:{
printf("\n\t exit point");
break;}

default:
{
printf("\n\t please enter a valid choice[1/2/3/4]");
}}
}
while(choice!=4);

return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\t stack is overflow");

}
else{
printf(" enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top=x];}

}
void pop(){

if(top>=0)
{
printf("\n\t stack is underflow");

}
else{
printf(" the popped element is %d",stack[top]);
top--;
}
}
void disp()
{
if(top>=0)
{
printf("\n the elements is stack");
for (i=0; i>=0; i--)
printf("\n %d",stack[i]);
printf("\n press next choice");

}
else
{
printf("\n the stack is empty");

}
}



