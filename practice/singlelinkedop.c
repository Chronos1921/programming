#include <stdio.h>
#include <stdlib.h>
void create();
void addatbegin();
void addafter();
int length();
void display();
void delete();
struct node
{
    int data;
    struct node* link;
};
struct node *root = NULL;
int len;
void main()
{
    int ch;
    while (1)
    {
        printf("\nSingle Linked List Operations\n");
        printf("1.Create\n");
        printf("2.Addatbegin\n");
        printf("3.Addatafter\n");
        printf("4.Length\n");
        printf("5.Display\n");
        printf("6.Delete\n");
        printf("7.Quit\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : create();
            break ;
            
            case 2: addatbegin();
            break;

            case 3: addafter();
            break;

            case 4: len=length();
            printf("The list currently has %d nodes\n",len);
            break;

            case 5: display();
            break;

            case 6: delete();
            break;

            case 7: 
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

int length()
{
    struct node* temp;
    int count=0;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
void addatbegin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node Data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->link=root;
        root=temp;
    }
}
void addafter()
{
    int loc;
    struct node* temp;
    struct node* p;
    int i=1;
    printf("Enter the location:-");
    scanf("%d",&loc);
    int len=length();
    if (loc>len)
    {
        printf("Error!Location entered is not present\nThe Current list has %d node",len);
    }
    else
    {
        p=root;
        while(i<loc)
        {
            i++;
            p=p->link;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter NODE DATA:");
        scanf("%d",&temp->data);
        temp->link=NULL;
        temp->link=p->link;
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
void delete()
{
    int loc,len,i=1;
    struct node* p,*q;
    
    printf("Enter the location you want to delete:");
    scanf("%d",&loc);
    len=length();
    p=root;
    if (loc>len)
    {
        printf("ERROR!Deletion not possible\nThe list currently has %d elements",len);
    }
    else if (loc==1)
    {
        root=p->link;
        p->link=NULL;
        free(p);
    }
    else
    {
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);

    }
    
}