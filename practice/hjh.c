#include<stdio.h>
#include<math.h>
#define MAX 10
#define SWAP(x,y,t) ((t=x),(x=y),y=t)
void sort(int list[],int n);
void main()
{
    int list[MAX];
    for (int i = 0; i < MAX; i++)
    {
        list[i]= rand() % 1000;
        printf("Element %d:%d\n",i+1,list[i]);
    }
    sort(list,MAX);
}

void sort(int list[MAX],int n)
{
    int temp;
    for (int i = 0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(list[i]>list[j])
            {
                SWAP(list[i],list[j],temp);
            }   
        }
    }   
    
            
    for (int i = 0; i <n; i++)
    {
        printf("%d\t",list[i]);
    }
    
}