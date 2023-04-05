#include<stdio.h>
#include<stdlib.h>
struct poly
{
    int coef;
    int pow;
    struct poly *link;
};
struct poly *start=NULL;
void create_poly();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("1.Enter Data of Polynomial\n");
        printf("2.Display the Polynomial\n");
        printf("3.Quit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: create_poly();
        break;
        case 2:
        display();
        case 3: exit(1);
        
        default:
        printf("Wrong Input!!\n");
        break;
        }
    }
}
void create_poly()
{
    struct poly *temp;
    temp=(struct poly*)malloc(sizeof(struct poly));
    printf("Enter the co-efficient:-");
    scanf("%d",&temp->coef);
    printf("Enter the power of x:-");
    scanf("%d",&temp->pow);
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        struct poly *p;
        p=start;
        while (p->link!=NULL)
        {
        p=p->link;
        }
        p->link=temp;
    }
}
void display()
{
    struct poly *p;
    p=start;
    if(start==NULL)
    {
        printf("No DATA Entered");
    }
    else{
        while (p!=NULL)
        {
            printf("%dx^%d + ",p->coef,p->pow);
            p=p->link;
        }      
    }
}
