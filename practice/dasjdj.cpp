#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void findsum(int n,int a[20],int q,int queries[10][3]);
int main()
{
    int a[20],n;
    cout<<"n=";
    cin>>n;
    for (int i=1; i<=n; i++) 
    {
        cout<<"a["<<i<<"]";
      cin>>a[i];
    }
    int q;
    cout<<"q=";
    cin>>q;
    if(q<3)
    {
        exit(1);
    }
    int queries[q][3];
    int s;
    cout<<"s=";
    cin>>s;
    for(int i=0;i<q;i++)
    {
        cin>>queries[i][0];
        cin>>queries[i][1];
        cin>>queries[i][2];
    }
    findsum(n,a,q,queries);
}
void findsum(int n,int a[20],int q,int queries[10][3])
{
    for(int i=0;i<q;i++)
    {
        int sum=0;
        for(int j=queries[i][0];j<=queries[i][1];j++)
        {   if(queries[i][0]<0 || queries[i][1]>n)
            {
                i++;
               exit(1); 
            }
            if(a[j]==0)
            {
                a[j]=queries[i][2];
            }
        
            sum+=a[j];
            a[j]=0;
        }
        cout<<"sum="<<sum<<endl;
    }
    

}