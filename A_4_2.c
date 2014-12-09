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

void removed(list ,list );


int detect(list head)
{
    list curr=head;
    list temp=head;

    while (curr && temp && temp->next)
    {
        curr = curr->next;
        temp  = temp->next->next;


        if (curr == temp)
        {
            removed(curr,head);


            return 1;
        }
    }

    return 0;
}

void removed(list curr,list head)
{
   list temp1;
   list temp2;


   temp1 = head;
   while(1)
   {

     temp2 = curr;
     while(temp2->next != curr && temp2->next != temp1)
     {
         temp2 = temp2->next;
     }


     if(temp2->next == temp1)
        break;


     else
       temp1 = temp1->next;
   }


   temp2->next = NULL;
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
                printf("Enter the data with min. node 5 ? y/Y\n");
                scanf("\n%c",&ch);
                }
                head->next->next->next->next->next = head->next->next;


                detect(head);

                printf("Linked List after removing loop \n");
                display(head);


                }
