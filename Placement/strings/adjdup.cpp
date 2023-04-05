#include<iostream>
using namespace std;
int main(){
    string s="gchabbaca";
    for (int i = 1; s[i]!='\0'; i++)
    {
        //cout<<"Loop "<<i<<endl;
        //cout<<"length :"<<s.length()<<endl;
        if(s[i]==s[i-1]){
            
            s.erase(i-1,2);
           // cout<<s<<"("<<i<<")"<<endl;
            i-=2;
        }
        //cout<<s<<endl;
    }
    cout<<s;
}