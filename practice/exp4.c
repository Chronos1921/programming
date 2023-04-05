#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
struct emp
{
    char id[10];
    char name[20];
    int age;
    float esal;
    float gross;
};
void calculate(struct emp *);
int main()
{
    int n;
    printf("Enter the number of Emploees:-");
    scanf("%d",&n);
    struct emp* ptr;
    ptr=(struct emp*)calloc(n,sizeof(struct emp));
    printf("Enter the Details of Emploees\n");
   for(int i=1;i<=n;i++)
{
    printf("Enter the Id No ,Name,Age and Salary of the Emploee:-\n");
    scanf("%s %s %d %f",ptr[i].id,ptr[i].name,&ptr[i].age,&ptr[i].esal);
    
}
        for(int i=1;i<=n;i++)
        {
            printf("Id No:-%s \nName:-%s\nAge:- %d\nSalary:-%.2f\n",ptr[i].id,ptr[i].name,ptr[i].age,ptr[i].esal);
            printf("***************************\n");
        }
        
}