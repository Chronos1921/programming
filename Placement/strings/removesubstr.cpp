#include<iostream>
using namespace std;
int main(){
    string str="dabaabcbc";
    string str2="abc";
    while(str.length()!=0  && str.find(str2)<str.length()){
        str.erase(str.find(str2),str2.length());
    }
    cout<<str;
}