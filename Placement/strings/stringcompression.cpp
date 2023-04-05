#include<iostream>
using namespace std;
int main(){
    string arr="aaaaaaaaaad";
    int i=0;
    int ansindex=0;
    int n=12;
    int j;
    while (i<n)        
    {   
        j=i+1;
        while(j<n && arr[i]==arr[j])
        {
            j++;
        }
        arr[ansindex++]=arr[i];
        int count=j-i;
        if (count>1)
        {
            string cnt=to_string(count);
            for (char ch :cnt)
            {
                arr[ansindex++]=ch;
            }
        } 
        i=j;
        
    }
    for (int i = 0; i < ansindex; i++)
    {
        cout<<arr[i];
    }
    ;
    
}