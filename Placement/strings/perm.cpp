#include<iostream>
using namespace std;
bool checkequal(int arr1[26],int arr2[26]){
    for (int i = 0; i < 26; i++)
    {
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}
bool checkperm(string str1,string str2){
    int arr1[26]={0};
    for (int i = 0; i < str1.length(); i++)
    {
       int index=str1[i]-'a';
       arr1[index]++;
    }
    int window=str1.length();
    //traverse str2 with windoe size of str1;
    int arr2[26]={0};
    int i=0;
    while(i<str1.length() && i<str2.length()){
        int index=str2[i++]-'a';
        arr2[index]++;
    }
    if (checkequal(arr1,arr2)){
        return 1;
        }
    
    while (i<str2.length())
        {
            int newval=str2[i]-'a';
            arr2[newval]++;
            int k=str1.length();
            int oldval=str2[i-k]-'a';
            arr2[oldval]--;
            if(checkequal(arr1,arr2)){
                return 1;
            }
            i++;
        }
    return 0;   
    
}
       

int main(){
    string str1="beh";
    string str2="shdshbekdfl";
    bool check=checkperm(str1,str2);
    cout<<check;
}
