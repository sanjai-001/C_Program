 #include<stdio.h>
#include<stdlib.h>

struct node
{
int value;
struct node *next;
};

struct node *head;

void init()
{
head=NULL;
}

void insertfirst(int element)
{
struct node *New;
New=(struct node*)malloc(sizeof(struct node));
New->value=element;
New->next=NULL;
New->next=head;
head=New;
}
void insertlast(int ele)
{

struct node *New, *temp;
New = (struct node*)malloc(sizeof(struct node));
if(New== NULL)
{
printf("Unable to allocate memory");
return;
}
else

{
New->value = ele;
if(head == NULL)
{
New -> next = NULL;
head = New;
printf("\nNode inserted");
}
else{
New->next = NULL;
temp = head;
while(temp->next != NULL)
temp = temp->next;
temp->next = New;
printf("DATA INSERTED SUCCESSFULLY\n");
}}
}
void print()
{
if(head==NULL)
{
printf("list is empty\n");

return;
}
struct node *cur=head;
int count;
count=0;
while(cur!=NULL)
{
printf("%d->",cur->value);
count++;
cur=cur->next;
}
printf("NULL\n");
printf("number of nodes %d\n",count);
}
int main()
{
init();

int ch,element;
while(1)
{
printf("\n1. Insert new item in the beginning. 2. Insert Last. 3. Print. 4.Exit\n-------------------------\n");
printf("enter choice of input:");
scanf("%d",&ch);
if(ch==1)
{
printf("enter element to list:");
scanf("%d",&element);
insertfirst(element);
}

else if(ch==2)
{
int le;
printf("enter element to insert at last");
scanf("%d",&le);
insertlast(le);
}
else if(ch==3)
{
print();
}

else if(ch==4)
return 0;
else
return 0;
}
return 0;
}
void delf(){
struct node * temp;
if(head==NULL){
    printf("List is empty");
}
else{
    temp=head;
    head=head->next;
    free(temp);
}
}
void del(){
struct node * temp,*temp_prev;
temp=head,temp_prev=NULL;
{
while(temp->next=NULL)
    temp_prev-temp;
    temp=temp->next;
}
temp_prev->next=NULL;
free(temp);
}


