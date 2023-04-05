#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=10;
    int m=n;
    int mask=0;
    while (m!=0)
    {
        mask=mask<<1 | 1;
        m=m>>1;
    }
    int ans=~n;
    cout<<ans;

    
}