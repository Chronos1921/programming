#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* head=NULL; 
void create()
{
    struct node* temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if (head==NULL)
    {
        head=temp;
    }
    else{
        struct node* ptr;
        ptr=head;
        while (ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
        
    }

}
void display()
{
   struct node* ptr;
   ptr=head;
   while (ptr!=NULL)
   {
       printf("%d-->",ptr->data);
       ptr=ptr->link;
   }
   printf("\n");
}
void addbegin()
    {
        struct node* temp;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data:");
        scanf("%d",&temp->data);
        temp->link=NULL;
        struct node *ptr;
        ptr=head;
        head=temp;
        temp->link=ptr;
    }
void addatk()
{
    struct node *temp;
    int pos;
    int count=1;
    struct node* ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&temp->data);
    printf("Enter position:");
    scanf("%d",&pos);
    temp->link=NULL;
    ptr=head;
    if (pos==1)
    {
        temp->link=head;
        head=temp;
    }
    else
    {
        while(count<pos)
        {
            ptr=ptr->link;
            if (ptr==NULL)
            {
                printf("Location Not Found\n");
                exit(0);
            }
            count++;
        }
        temp->link=ptr->link;
        ptr->link=temp;
    }
} 
void addaftele()
{
    struct node* temp;
    int ele;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&temp->data);
    printf("Enter element:");
    scanf("%d",&ele);
    struct node* ptr;
    ptr=head;
    while (ptr!=NULL)
    {
        if(ptr->data==ele)
        {
            temp->link=ptr->link;
            ptr->link=temp;
        }
        ptr=ptr->link;
        
    }
    
}
void addbfrele()
{
    struct node* temp;
    int ele;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&temp->data);
    printf("Enter element:");
    scanf("%d",&ele);
    struct node* ptr;
    ptr=head;
    while (ptr->link!=NULL)
    {
        if(ptr->link->data==ele)
        {
            temp->link=ptr->link;
            ptr->link=temp;
        }
        ptr=ptr->link;
        
    }
}
void addanelement()
{
    printf("1.Enter at begining\n");
    printf("2.Enter at End\n");
    printf("3.Add at kth position\n");
    printf("4.Add after an element\n");
    printf("5.ADD before element\n");
    int choice;
    printf("Enter Choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        addbegin();
        break;
    case 2:
        create();
        break;
    case 3:
        addatk();
        break;
    case 4:
        addaftele();
        break;
    case 5:
        addbfrele();
    default:
        break;
    }
}
void deletebegin()
{
    head=head->link;
}
void deleteatend()
{
    struct node* ptr;
    ptr=head;
    while (ptr->link->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=NULL;
}
void deleteatk()
{
    struct node *ptr;
    ptr=head;
    int i=1;
    int pos;
    printf("Enter position you want to delete:");
    scanf("%d",&pos);
    while(i<pos-1)
    { 
        ptr=ptr->link;
        if (ptr==NULL)
        {
            printf("Location not found\n");
            exit(1);
        }
        i++;
    }
    ptr->link=ptr->link->link;
    
}
void deleteaftele()
{
    struct node* ptr;
    ptr=head;
    int ele;
    printf("Enter element:");
    scanf("%d",&ele);
    while (ptr->data!=ele)
    {
        ptr=ptr->link;
    }
    if (ptr->link==NULL)
    {
        printf("No data after the element");
    }
    else
    ptr->link=ptr->link->link;
}
void deleteele()
{
    struct node* ptr;
    ptr=head;
    int ele;
    printf("Enter element:");
    scanf("%d",&ele);
    if (ptr->data==ele)
    {
        printf("No data before the element\n");
    }
    else{
        while(ptr->link->data!=ele)
        {
            ptr=ptr->link;
        }
        ptr->link=ptr->link->link;
    }
}
void deletealternate()
{
   if (head == NULL)
        return;
  
    /* Initialize temp and node to be deleted */
    struct node *temp = head;
    struct node *node = head->link;
  
    while (temp != NULL && node != NULL)
    {
        /* Change next link of tempious node */
        temp->link = node->link;
  
        /* Free memory */
        free(node);
  
        /* Update temp and node */
        temp = temp->link;
        if (temp != NULL)
            node = temp->link;
    }

}
void delete()
{
    printf("1.Delete at begining\n");
    printf("2.Delete at End\n");
    printf("3.Delete at kth position\n");
    printf("4.Delete after an element\n");
    printf("5.Delete  element\n");
    int choice;
    printf("Enter Choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        deletebegin();
        break;
    case 2:
        deleteatend();
        break;
    case 3:
        deleteatk();
        break;
    case 4:
        deleteaftele();
        break;
    case 5:
        deletealternate();
    default:
        break;
    }
    
}
int main()
{
    int choice;
    while(1)
    {
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Add an element\n");
        printf("4.Delete\n");
        printf("5.Exit\n");
        printf("Enter Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            addanelement();
            break;
        case 4:
            delete();
            break;
        case 5:
            exit(1);
        default:
            printf("Wrong input\n");
            break;
        }
    }

}