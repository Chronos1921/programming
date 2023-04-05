#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
    int data;
    struct node *next;
}
struct node *head;
struct node *tail;
void insert_
void insert_end()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&temp->data);
    if (head==NULL)
    {
        temp->prev=NULL;
        head=temp;
        temp->next=NULL;
    }
    else
    {
        struct node *ptr;
        ptr=head;
        while(ptr->next!=NULL)
        {
           ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
        temp->prev=ptr;

    }
    
}
void insert()
{
    printf("1.Insert at begining\n");
    printf("Insert at end\n");
    printf("Enter your choice:");
    int ch;
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        insert_beginning();
        break;
    case 2:
        insert_end();
        break;
    default:
        break;
    }
}
void traverse()
{

}
void delete()
{

}
int main()
{
    while (1)
    {
        printf("\nDouble Linked List Operations\n");
        printf("1.Insert at beginning and end\n");
        printf("2.Delete from begining and end\n");
        printf("3.Swap first and last node\n");
        printf("4.Quit\n");
        printf("Enter choice:-");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
           insert();
            break;
        case 4:
            exit(1);

        default:
        printf("Wrong Input\n");
            break;
        }
    }
}