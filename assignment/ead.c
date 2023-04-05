#include<stdio.h>
int main()
{
    int arr[5][5];
    int n;
    printf("Enter the number of rows and columns in matrix:-\t");
    scanf("%d",&n);
    printf("Enter the elements:-\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=n; i>=2; i--)
    {
        for(int j=n; j>=2; j--)
        {
            printf("%d   %d   :-%d\n",j,i,arr[j][i]);
        }
    }
} 