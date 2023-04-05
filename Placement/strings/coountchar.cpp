#include<iostream>
using namespace std;
int main(){
    int arr[26]={0};
    string s="aaaab";
    for (int i = 0; i < s.length(); i++)
    {
        int number=0;
        number=s[i]-'a';
        arr[number]++;
    }
    int max=0,chr=-1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>max)     
        {
            max=arr[i];
            chr=i+'a';
        }
    }
    cout<<"the string contains "<<max<<" number"<<" of "<<char(chr);
    
}
