#include<stdio.h>
void insertfirst(int element)
{
    int value,head,null;
    struct node *new;
    new=(structnode*)malloc sizeof(sizeof(structnode));
    new->value=element;
    new->next=null;
    new->next=head;
    head=new;
}
void print()
{
    if(head==null)
    {
        printf("list is empty\n");
        return 0;
    }
}
