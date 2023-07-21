#include<stdio.h>
 struct node
 {
     int data;
  struct node * next;
  };
 void view_stack(struct node*);
 struct node * temp;
 temp=(struct node *)malloc(size node);
 temp->data=data;
 temp->link=top;
 top=temp;
 printf("%d is pushed\n",top->data);
 view_stack(top);
 return top;
 }
 struct node*pop(struct node * top)
 }
 struct node * pop(struct node * top)
 {
 struct node * temp;
 temp=top;
 if(top==null)
 {printf("stack empty!nothing to pop\n");
 return;
 }
 top=top->link;
 printf("%d is popped\n",temp->data);
 free(temp);
 view_stack(top);
 return top;
 }
 void peak(struct node * top)
 {
 if(top==null)
 {
 printf("stack empty\n");
 }
 else
 {
 printf("top item=%d",top->data);
 }}
 void view_stack (struct node*top)
 {
 struct node * temp=top;
 printf("tour current stack:\n");
 prinf("    \n");
 while(temp!=NULL)
 {
 printf("------\n|  %d |\n--------\n",temp->data);
 }
 }

