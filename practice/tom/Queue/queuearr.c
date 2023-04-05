#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
int q[MAX],front=-1,rear=-1;
void enqueue();
void dequeue();
void traverse();
int main()
{
    int ch;
    while(1)
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Traverse\n");
        printf("3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);       
        default:
            printf("Invalid Input");
            break;
        }
    }

}
void enqueue()
{
    int data;
    if(rear==MAX-1)  
    {
        printf("Stack is Overflowed\n");
    } 
    else
    {
        if (front==-1)
        {
            front=0;
        }
        
        printf("Enter Data:");
        scanf("%d",&data);
        rear++;
        q[rear]=data;
    }
}
void dequeue()
{
    if (front==-1 || front>rear)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d is dequeued",q[front]);
        front++;
    }
    
}
void traverse()
{
    if (front==-1 || front==rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i;
        for (int i =front; i <=rear; i++)
        {
            printf("|%d|\n",q[i]);
        }
    }
    
}