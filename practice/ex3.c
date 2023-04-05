#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10];
    int m1,n1,m2,n2,i,j;
    printf("For the First Matrix\nEnter the number of Rows :-");
    scanf("%d",&m1);
    printf("Enter the number of Columns :-");
    scanf("%d",&n1);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("Element %d %d:-",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
   int t1[10][3];
   int size1=0;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(a[i][j]!=0)
            size1++;
        }
    }
    t1[0][0]=m1;
    t1[0][1]=n1;
    t1[0][2]=size1;
    int k=1;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(a[i][j]!=0)
            {
                t1[k][0]=i;
                t1[k][1]=j;
                t1[k][2]=a[i][j];
                k++;
            }
        }
    }
    for(i=0;i<=size1;i++)
    {
          printf("%d\t%d\t%d",t1[i][0],t1[i][1],t1[i][2]);
        printf("\n");
    }
    
   // printf("zxc%d\n",a[1][2]);
    printf("For the Second Matrix\nEnter the number of Rows :-");
    scanf("%d",&m2);
    printf("Enter the number of Columns :-");
    scanf("%d",&n2);
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("Element %d %d:-",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int t2[10][3];
    int size2=0;
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[i][j]!=0)
            size2++;
        }
    }
    t2[0][0]=m2;
    t2[0][1]=n2;
    t2[0][2]=size2;
    k=1;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i][j]!=0)
            {
                t2[k][0]=i;
                t2[k][1]=j;
                t2[k][2]=b[i][j];
                k++;
            }
        }
    }
    for(i=0;i<=size2;i++)
    {
          printf("%d\t%d\t%d",t2[i][0],t2[i][1],t2[i][2]);
        printf("\n");
    }
    if(t1[0][0]!=t2[0][1])
    {
        printf("Matrix CANNOT be multiplied");
        exit(0);
    }
    else 
    printf("On Multiplication :-\n");
    int t3[20][3];
    
}
