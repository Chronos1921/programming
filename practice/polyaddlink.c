#include<stdio.h>
#include<stdlib.h>
struct poly 
{
    int coef;
    int exp;
    struct poly* link;
};

struct poly* h1=NULL;
struct poly* h2=NULL;
struct poly* h3=NULL;
void first();
void second();
void display();
void add(struct poly*,struct poly*);
//void arrange();
int length(struct poly *);
int main()
{
    int ch;
    while(1)
    {
        printf("************************************************\n");
        printf("1.Enter terms of First Polynomial\n");
        printf("2.Enter terms of Second Polynomial\n");
        printf("3.Display Polynomial\n");
        printf("4.Add Polynomial 1 and 2\n");
        printf("Enter your choice:-");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            first();
            break;
        case 2:
            second();
            break;
        case 3:
            display();
            break;
        case 4:
            add(h1,h2);
            break;
        default:
            printf("WRONG INPUT!!\n");
            break;
        }
    }
}
void first()
{
    struct poly* t1;
    t1=(struct poly *)malloc(sizeof(struct poly));
    printf("Enter coefficient: ");
    scanf("%d",&t1->coef);
    printf("Enter power of x: ");
    scanf("%d",&t1->exp);
    t1->link=NULL;
    if(h1==NULL)
    {
        h1=t1;
    }
    else
    {
        struct poly* p;
        p=h1;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=t1;
    }
}
void second()
{
    struct poly* t2;
    t2=(struct poly *)malloc(sizeof(struct poly));
    printf("Enter coefficient: ");
    scanf("%d",&t2->coef);
    printf("Enter power of x: ");
    scanf("%d",&t2->exp);
    t2->link=NULL;
    if(h2==NULL)
    {
        h2=t2;
    }
    else
    {
        struct poly* p;
        p=h2;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=t2;
    }

}
void display()
{
    
   /* struct poly *p;
    p=h3;
    while (p->link!=NULL)
    {
        printf("%dx^%d",p->coef,p->exp);
        p=p->link;
    }*/
    int choice;
    printf("Which polynomial do you want to display?? \n1.First Polynomial \n2.Second Polynomial :-");
    printf("\nEnter Your Choice:-");
    scanf("%d",&choice);
    struct poly* p;
    if(choice==1)
    {
            p=h1;
            int i=1;
            int len=length(p);
            if (h1==NULL)   
        {
            printf("\nYou have not entered any data for polynomial one\n");
        }
        else
        while(p!=NULL)
        {
            printf("%dx^%d",p->coef,p->exp);
            if (i!=len)
            {
                printf(" + ");
                i++;
            }
            p=p->link;
        }
        printf("\n\n");
    }

    if(choice==2)
    {
        p=h2;
        int i=1;
        int len=length(p);
        if (h2==NULL)   
        {
            printf("\nYou have not entered any data for polynomial two\n");
        }
        else
        while(p!=NULL)
        {
            printf("%dx^%d",p->coef,p->exp);
            if (i!=len)
            {
                printf(" + ");
                i++;
            }
            p=p->link;
        }
        printf("\n");
    }

}
void add(struct poly* h1,struct poly* h2)
{
    struct poly *t1,*t2;
    t1=h1;
    t2=h2;
    while(t1->link!=NULL && t2->link!=NULL)
    {
        struct poly *temp;
        temp=(struct poly*)malloc(sizeof(struct poly));
            //case1//
       if(t1->exp>t2->exp)
        {
            temp->coef=t1->coef;
            temp->exp=t1->exp;
            temp->link=NULL;
            if(h3==NULL)
            {
                h3=temp;
            }
            else
            {
                struct poly *p;
                p=h3;
                while (p->link!=NULL)
                {
                    p=p->link;
                }
                p->link=temp;
            }
             t1=t1->link;
        }
        
        //case 2//
        else if(t2->exp>t1->exp)
        {
            temp->coef=t2->coef;
            temp->exp=t2->exp;
            temp->link=NULL;
            if(h3==NULL)
            {
                h3=temp;
            }
            else
            {
                struct poly *p;
                p=h3;
                while (p->link!=NULL)
                {
                    p=p->link;
                }
                p->link=temp;
            }
            t2=t2->link;
        }
        //case 3//
        if (t1->exp==t2->exp)
        {
            temp->coef=t1->coef+t2->coef;
            temp->exp=t1->exp;
            temp->link=NULL;
            if(h3==NULL)
            {
                h3=temp;
            }
            else
            {
                struct poly *p;
                p=h3;
                while (p->link!=NULL)
                {
                    p=p->link;
                }
                p->link=temp;
            }
            t1=t1->link;
            t2=t2->link;
        }
        while (t1!=NULL)
        {
            struct poly *temp;
            temp=(struct poly*)malloc(sizeof(struct poly));
            temp->coef=t1->coef;
            temp->exp=t1->exp;
            temp->link=NULL;
        if(h3==NULL)
            {
                h3=temp;
            }
            else
            {
                struct poly *p;
                p=h3;
                while (p->link!=NULL)
                {
                    p=p->link;
                }
                p->link=temp;
            }
             t1=t1->link;
        }
        while (t2!=NULL)
        {
            struct poly *temp;
            temp=(struct poly*)malloc(sizeof(struct poly));
            temp->coef=t2->coef;
            temp->exp=t2->exp;
            temp->link=NULL;
            if(h3==NULL)
            {
                h3=temp;
            }
            else
            {
                struct poly *p;
                p=h3;
                while (p->link!=NULL)
                {
                    p=p->link;
                }
                p->link=temp;
            }
            t2=t2->link;
        }
        
    }
}

int length(struct poly* p)
{
    int count=1;
    while(p->link!= NULL)
    {
        count++;
        p=p->link;
        
    }
    return(count);
}