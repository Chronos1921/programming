#include<iostream>
using namespace std;
int main(){
    char name[10]="Kaushik";
    int count=0;
    //length of a string 
    for (int i = 0; name[i]!='\0' ; i++)
    {
        count++;
    }
    for (int i = 0; i < count/2; i++)
    {
        char temp;
        temp=name[i];
        name[i]=name[count-i-1];
        name[count-i-1]=temp;
    }
    
    cout<<name;
}