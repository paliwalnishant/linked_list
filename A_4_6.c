#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
int data;
struct node *next;
};
typedef struct node *list;

list node_end(list *head,int val)
{
    list temp,curr;
    temp=(list)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(*head==NULL)

       {

        *head=temp;
        curr=temp;
       }
    else
    {
        curr=*head;
        while(curr->next!=NULL)
    {
        curr=curr->next;}
        curr->next=temp;
        }
}


void removed(list *head)
{
  list curr, temp ,temp1;
  curr = *head;


  while(curr != NULL && curr->next != NULL)
  {
     temp = curr;


     while(temp->next != NULL)
     {

       if(curr->data == temp->next->data)
       {

          temp1 = temp->next;
          temp->next = temp->next->next;
          free(temp1);
       }
       else
       {
          temp = temp->next;
       }
     }
     curr= curr->next;
  }
}


void display(list temp)
{
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}

int main()
{
    list head;
    head=NULL;


int dat,length=0;
char ch;


printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);
                while(ch=='y'|ch=='Y')
                {
                scanf("%d",&dat);
                node_end(&head,dat);
                length=length++;
                printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);
                }

                display(head);
                removed(&head);
                printf("After removing duplicates")
                display(head);
                }
