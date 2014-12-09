#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
int data;
struct node *next;
};
typedef struct node *list;


void node(list *head,int num)
{
list temp,curr;

temp=(list)malloc(sizeof(struct node));
temp->data=num;
temp->next=NULL;

if(*head==NULL || (*head)->data>=temp->data)
{
temp->next=*head;
*head= temp;
}
else

{


        while (curr->next!=NULL &&
               curr->next->data <temp->data)
        {
            curr= curr->next;
        }
        temp->next=curr->next;
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
int dat;
char ch;
list head=NULL;
list temp;
printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);
                while(ch=='y'|ch=='Y')
                {
                scanf("%d",&dat);
                node(&head,dat);
                printf("Enter the data ? y/Y\n");
                scanf("\n%c",&ch);

}

display(head);
}
