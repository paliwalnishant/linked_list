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

list reverse(list head){
list temp,p,q;
temp=NULL;
p=head;
q=p->next;

while(q!=NULL)
{

  p->next=temp;
  temp=p;
  p=q;
  q=q->next;

}
p->next=temp;
head=p;
}

bool comparelist(list head,list head1)
               {


                list curr1=head1;
                list curr=head;

                while(curr!=NULL)
                {
                    if(curr->data==curr1->data)
                {
                    curr=curr->next;
                    curr1=curr1->next;
                }
                else
                    return 0;
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
                head1=reverse(head);
                x=comparelist(head,head1);
                if(x)
                    printf("palindrome");
                else
                    printf("not a palindrome");

}



