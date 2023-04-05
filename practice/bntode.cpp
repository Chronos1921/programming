#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bintodec(int num);
int main()
{
    int num1,num2;
    cout<<"Enter the first binary number:-";
    cin>>num1;
    cout<<"Enter the second binary number:-";
    cin>>num2;
    int no1=bintodec(num1);
    int no2=bintodec(num2);
    cout<<"The first number is "<<no1<<endl;
    cout<<"The second number is "<<no2<<endl;
}
int bintodec(int num)
{
    int i=0,a[10],dnum;
    while (num>0)
    {
        a[i]=num%10;
        num=num/10;
       // cout<<"a["<<i<<"]="<<a[i]<<endl;
        i++;
    }
    int len=i;
    dnum=0;
    for(int i=len-1;i>=0;i--)
    dnum=dnum+a[i]*pow(2,i);
   return dnum;
}