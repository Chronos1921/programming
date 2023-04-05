#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number";
    int num;
    cin>>num;
    int n=2;
    while(n<=num)
    {
        int div=2;
        while (div<=num)
        {
            if (num%div==0)
            {
                num+=num;
            }
            else
            div+=div;

        }
        cout<<num<<"  ";
        num+=1;
    }
}