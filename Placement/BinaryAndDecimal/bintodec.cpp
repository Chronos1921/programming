#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=1010;
    int ans=0;
    for (int i = 0; n!=0; i++)
    {
        int bit=n%10;
        cout<<bit<<endl;
        ans=(bit*pow(2,i))+ans;
        n=n/10;
    }
    cout<<ans;
}