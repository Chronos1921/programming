#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=-10;
    int ans=0;
    int i=0;
    int arr[20];
    if (n>=0)
    {
        while (n!=0)
        {
            int bit=n & 1;
            arr[i]=bit;
            n=n>>1;
            i++;
        }   
        for (int j = 0; j < i; j++)
        {
            cout<<arr[i-j-1];
        }
    }
    else
    {
        n=-(n);
        while (n!=0)
        {
            int bit=n & 1;
            arr[i]=bit;
            n=n>>1;
            i++;
        }   
        int ans[32];
        for (int j = 0; j < i; j++)
        {
            ans[j]=!arr[i-j-1];
        }
        for (int k = 0; k < i; k++)
        {
            cout<<ans[k];
        }
        for (int m=i; m < ; m++)
        {
            /* code */
        }
        
        
    }
    
    
    
    
}