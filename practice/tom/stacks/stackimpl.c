#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;
void push()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&temp->data);
    temp->link=head;
    head=temp;
}
void pop()
{

}
void traverse()
{
    if (head==NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        struct node *ptr;
        ptr=head;
        while (ptr!=NULL)
        {
            
            printf(" |%d|\n",ptr->data);
            ptr=ptr->link;
        }
        
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Traverse\n");
        printf("4.Exit\n");
        printf("Enter Your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);        
        default:
            break;
        }
    }
    
}