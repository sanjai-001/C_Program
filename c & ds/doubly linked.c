#include<stdio.h>

struct node { struct node *prev;

int data;

struct node *next;

struct node *tail,*head; void insertatend()

int ele, *temp,*new;
 new=(struct node*)malloc(sizeof(structnode)) scanf("%d",&ele); new->value=ele; {

new->prev=null,

new->next=null; if(head==null)

head==new;

} else

{ temp-head;

while(temp->next!=tail)

temp-temp->next;

}

tail->next=new; new->prev=tail;

tail=new;

}

void display()

struct node *temp;

temp=head;

while(temp->next!=null)

{ printf("%d", temp->data); temp-temp->next;

}

void insertionatfront()

struct node *new,*prev,

new=(struct node*)malloc(sizeof(struct node));

scanf("%d",&ele);

new->data=ele; new->next=null;

new->prev=null; head=new;

new->next-head; head->prev=new;

}

void insertmiddle()

struct node *new;

node)); scanf("%d",&ele);

new->data=ele;

new=(struct node *)malloc(sizeof(struct new->prev=null; new->next=null;
[8/16, 7:03 PM] 🚶‍♂️: temp-head; int search;

scanf("%d",&search); while(temp->ele!=search);

temp-temp->search;

{ new->next-temp->next; temp->next=new; new->prev=temp; }

temp->next->prev=new;

} void deletionatfront()

{ struct node *temp;

head-head->next;

temp=head; temp->next=null; head->prev=null; }

free(temp);

void deletionatend()

struct node *temp; temp->prev=null;

temp=tail; tail-tail->prev;

tail->next=null; }

void deleteinmiddle()

struct node *temp;

int pos,i;

scanf("%d",&pos); temp=head;

for(i=0;i<pos-1;i++) (temp-temp->next;

temp->next-temp->next->next; temp->next->prev=temp;

} }

int main() { int choice;

printf("\n1.Insert element at first"); printf("\n2.Insert element at specific

position");

printf("\n3.Insert element at last"); printf("\n4.Delete element at first"); printf("\n5.Delete element at specific

position");

printf("\n6.Delete element at last"); printf("\n7.Display");

scanf("%d",&choice);

switch(choice)

(

case 1:

break;

void insertionatfront();

{

} case 2:

void insertmiddle(); break;

} case 3:
[8/16, 7:03 PM] 🚶‍♂️: {

void insertatend(); break;

}

case 4:

{

void deletionatfront(); break;

}

case 5:

{

void deleteinmiddle(); break;

}

case 6:

{

void deletionatend(); break;

}

case 7:

{

void display(); break;

}

}
