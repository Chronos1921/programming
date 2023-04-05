#include<stdio.h>
#include<stdlib.h>
#define capacity 5
int stack[capacity],top=-1;
void push(int ele);
void pop();
int isEmpty();
int isFull();
void peek();
void traverse();
int main()
{
    int ch;
    int item;
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Traverse\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter element:");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);       
        default:
            printf("Invalid Input");
            break;
        }
    }
}
void push(int ele)
{
    if (isFull())   
    {
        printf("STACK OVERFLOW\n");
         printf("\n");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("%d is inserted successfully\n",ele);
         printf("\n");
    }
}
int isFull()
{
    if (top==capacity-1)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}
void pop()
{
    if(isEmpty())
    {
        printf("Stack is Underflowed\n");
    }
    else
    {
        top--;
    }
}
int isEmpty()
{
    if (top==-1)
    {
        return 1;
    }
    else
    return 0; 
}
void peek()
{
    if(isEmpty())
    {
        printf("Stack is empty");
         printf("\n");
    }
    else{
        printf("%d",stack[top]);
         printf("\n");
    }
}
void traverse()
{
    if (isEmpty())
    {
        printf("Stack is Empty");
    }
    else
    {
        int i=top;
        for (int i = top; i >-1; i--)
        {
            printf("%d-->",stack[i]);
        }
       printf("\n"); 
    }
}