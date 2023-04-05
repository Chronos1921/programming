#include<iostream>
using namespace std;
int main()
{
    int base,i,j,m,n,size,r_major,c_major,lbr,lbc;
    cout<<"base Address:";
    cin>>base;
    cout<<"No of rows:";
    cin>>m;
    cout<<"No of Columns:";
    cin>>n;
    cout<<"Row no:";
    cin>>i;
    cout<<"Column no:";
    cin>>j;
    cout<<"Size:";
    cin>>size;
    cout<<"Lower bound Row:";
    cin>>lbr;
    cout<<"Lower bound coloumn:";
    cin>>lbc;
    r_major=base+size*(((i-lbr)*n)+(j-lbc));
    c_major=base+size*((i-lbr)+((j-lbc)*m));
    
    cout<<"Row Major Adress ="<<r_major<<endl;
    cout<<"column Major Adress ="<<c_major<<endl;



}