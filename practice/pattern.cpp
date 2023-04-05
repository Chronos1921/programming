#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter row:-";
    cin>>row;
    for (int i = 0; i <=row; i++)
    {
        for (int j = row-i; j >0; j--)
        { 
                cout<<"*";
        }
        cout<<endl;
        
    }
    
}