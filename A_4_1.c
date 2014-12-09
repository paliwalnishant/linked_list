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


void intersection(list *head1,list *head2,list *head3,int l1,int l2)
{
   list curr1=*head1,temp1=curr1->next;
   list curr2=*head2,temp2=curr2->next;
   list temp3=*head3;
   if(l1<l2)
   {


   while(temp1!=NULL)
   {
       if(curr1->data==curr2->data)
       {
           curr1->next=temp3;
           *head3=curr1;
           curr1=temp1;
           temp1=temp1->next;

       }
       else
       {
           curr2=curr2->next;
           temp2=temp2->next;
       }
   }
   }
   else
   {
       while(temp2!=NULL)
   {
       if(curr1->data==curr2->data)
       {
           curr2->next=temp3;
           *head3=curr2;
           curr2=temp2;
           temp2=temp2->next;

       }
       else
       {
           curr1=curr1->next;
           temp1=temp1->next;
       }
   }
   }
   }


   void unionlinklist(list*head1,list *head2,int l1,int l2)
   {
       if(l1<l2)
       {
           list curr1=*head1;list temp1=curr1->next;
           list curr2=*head2;list temp2=curr2->next;
           while(temp1!=NULL)
           {
               if(curr1->data==curr2->data)
               {
                   curr2=curr2->next;
                   temp1=temp1->next;
                   temp2=temp2->next;
                   curr1=curr1->next;

               }
               else
                {
                curr2=curr2->next;;
               *head2=curr2;
               curr1=temp1;
               temp1->temp1-next;
               }
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
    list head2,head1,head3;
    head2=NULL;
    head1=NULL;
    head3=NULL;

int dat,length1=0,length2=0,pos,x;
char ch;


printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);
                while(ch=='y'|ch=='Y')
                {
                scanf("%d",&dat);
                node_end(&head1,dat);
                length1=length1++;
                printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);
                }



                printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);
                while(ch=='y'|ch=='Y')
                {
                scanf("%d",&dat);
                node_end(&head2,dat);
                length2=length2++;
                printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);
                }
                printf("LINK LIST 1 is :");
                display(head1);
                printf("LINK LIST 2 is :");
                display(head2);

               // intersection(&head1,&head2,&head3,length1,length2);
               // display(head3);

                unionlinklist(&head1,&head2,length1,length2);




                }

