#include<iostream>
using namespace std;
int update(int a ){
    a=a+1;
    return a;
}
int main(){
    int a=10;
    update(a);
    cout<<a;
    int arr[10]={5};
    cout<<arr[2];
    cout<<"Enter the amount :";
    int amt;
    cin>>amt;
    while (amt!=0)  
    {
        if (amt/100>=0)
        {
            int den100=amt/100;
            cout<<"100 Rs note :"<<den100<<endl;
            amt=amt%100;
        }
        if (amt/50>=0)
        {
            int den50=amt/50;
            cout<<"50 Rs note :"<<den50<<endl;
            amt=amt%50;
        }
        if (amt/10>=0)
        {
            int den10=amt/10;
            cout<<"10 Rs note :"<<den10<<endl;
            amt=amt%10;
        }if (amt/1>=0)
        {
            int den1=amt/50;
            cout<<"1 Rs note :"<<den1<<endl;
            amt=amt%1;
        }        
        
    }
    
}