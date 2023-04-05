#include<iostream>
using namespace std;
void mul(int mat1[3][3],int mat2[3][3]);
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    cout<<"For matrix 1\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"mat1["<<i<<"]["<<j<<"]=";
            cin>>mat1[i][j];
        }
    }
    cout<<"For Matrix 2\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"mat2["<<i<<"]["<<j<<"]=";
            cin>>mat2[i][j];
        }
    }
    mul(mat1,mat2);

}
void mul(int mat1[3][3],int mat2[3][3])
{
    int mat3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"  "<<mat3[i][j];
        }
        cout<<"\n";
    }
    
    
}