#include <stdio.h>
#include <stdlib.h>
void create();
void sort_even();
void display();
void sort_odd();
struct node
{
    int data;
    struct node* link;
};
struct node *root = NULL;
int len;
int main()
{
        int ch;
        while (1)
        {
            printf("\nSingle Linked List Operations\n");
            printf("1.Create\n");
            printf("2.Sort Even\n");
            printf("3.Sort odd\n");
            printf("4.Display\n");
            printf("5.Quit\n");
            printf("Enter Your Choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1 : create();
                break ;
                
                case 2: sort_even();
                break;

                case 4: display();
                break;

                case 3: sort_odd();
                break;

                case 5: 
                exit(1);

                default: printf("Invalid Input\n");

            }
        }
}
void create()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Node Data:\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d--->",temp->data);
            temp=temp->link;
        }
    }
}
void sort_even()
{
    struct node *p;
    p=root;
    while (p)
    {
        if(p->data%2==0)
        {
            printf("%d--->",p->data);
        }
        p=p->link;
    }
}
void sort_odd()
{
   struct node* temp;
   struct node* p;
   temp=root;
   while(temp!=NULL)
   {
       if(temp->data%2==0)
       {
           p=temp;
           temp=temp->link;
       }
       if(temp->data%2==1)
       {
           p->link=temp->link;
           temp=temp->link;
           temp->link=NULL;
       }
   }
}