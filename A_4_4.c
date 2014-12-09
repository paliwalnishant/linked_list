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
    list head,curr,before,after;
    head=NULL;

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


before=head;
curr=before->next;
after=curr->next;

                while(curr->next!=NULL)
                {
               if(head->data<curr->data)
                {
                free(before);
                head=curr;
                before=curr;
                curr=curr->next;
                after=after->next;
                }
                else
                if(curr->data<after->data){

                before->next=curr->next;

                free(curr);
                curr=after;
                after=after->next;
                }
                else{
                before=before->next;
                curr=curr->next;
                after=after->next;
                }
                }
                display(head);

                }
