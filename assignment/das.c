#include<stdio.h>
int main()
{
    int arr[5],*ptr;
    for(int i=1;i<=5;i++)
    {
        printf("Enter the number:-");
        scanf(" %d",&arr[i]);
    }
    ptr=arr;
    for(int i=1;i<6;++i)
    {
        printf("Number %d:- %d \n",i,ptr[i]);
    
    }

}