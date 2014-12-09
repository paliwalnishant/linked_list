#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
int data;
struct node *next;
};
typedef struct node *list;

void node_end(list *head,int val)
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

void segregate(list *head)
{
    list curr=*head,temp=curr->next;
    while(temp!=NULL){
        if(temp->data%2!=0){
            curr=temp;
            temp=temp->next;
        }
        else
            {curr->next=temp->next;
        temp->next=*head;
        *head=temp;
        temp=curr->next;
        }

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
    list head,curr,head1,curr1;
    head=NULL;
    curr=head;

int dat,length=0,c,pos,x;
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
                segregate(&head);
                display(head);
                }
