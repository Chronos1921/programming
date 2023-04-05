#include<iostream>
using namespace std;
string validstr(string str){
    string s="";
    for (int i = 0; i < str.size(); i++)
    {
        if((str[i]>='a'&& str[i]<='z')||(str[i]>='0'&& str[i]<='9')){
            s.push_back(str[i]);
        }
        else if(str[i]>='A' && str[i]<='Z'){
            char temp=str[i]-'A'+'a';
            s.push_back(temp);
        }
    }
    return s;
}
bool checkpalindrome(string str){
    string vstr=validstr(str);
    int i=0,j=vstr.size()-1;
    while(i<j){
        if(vstr[i]==vstr[j]){
            i++;
            j--;
        }
        else
            return false;
    }
    
    return true;
}
int main(){
    string str="A man, a plan, a canal: Panama";
    bool x=checkpalindrome(str);
    cout<<x;
}