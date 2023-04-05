#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void push(int x);
void traverse();
void pop();
int top=-1;
int arr[MAX];
int main()
{
    int x;
    int ch;
    while(1)
    {
        printf("\nStack Operation:-\n");
        printf("--------------------\n");
        printf("1.Push element\n");
        printf("2.Traverse\n");
        printf("3.Pop\n");
        printf("4.Quit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("Enter element:-");
            scanf("%d",&x);
            push(x);
            break;
        case 2: 
            traverse();
            break;
        case 3:
            pop();
            break;
        case 4:
            exit(0);
        
        default:
        printf("Invalid Input\n");
            break;
        }
    }
}
void push(int x)
{if (top>MAX)
    {
        printf("Stack is Overflowed");
    }
else
    top++;
    arr[top]=x;
}
void traverse()
{
    int a=top;
    while(a>-1)
    {
        printf("%d  ",arr[a]);
        a--;
    }
}
void pop()
{
    arr[top]=NULL;
    top--;
}