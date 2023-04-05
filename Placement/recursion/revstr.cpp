#include<iostream>
using namespace std;
string revstr(string str,int size, int i){
    if(i>=size/2){
       // cout<<str;
        return str;
    }
    swap(str[i],str[size-i-1]);
    return revstr(str,size,i+1);

}
int main(){
    string str="risha patra";
    int size=str.length();
    string rev=revstr(str,size,0);
    cout<<rev;
}