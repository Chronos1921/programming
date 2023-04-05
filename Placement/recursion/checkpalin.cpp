#include<iostream>
using namespace std;
bool checkpalindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if (str[i]!=str[j]){
        return false ;
    }
    else{
        //cout<<i;
        return checkpalindrome(str,i+1,j-1);
    }
}
int main(){
    string str="abbabtba";
    //cout<<str.length();
     bool ans=checkpalindrome(str,0,str.length()-1);
    if(ans){
        cout<<"palindrome";
    }
    else {
        cout<<"not a palindrome ";
    }
}