#include<iostream>
using namespace std;
int length(char x[]){
    int count=0;
    for (int i = 0; x[i]!='\0'; i++)        
    {
        count++;
    }
    return count;
    
}
char tolowercase(char a){
    if (a>='a' && a<='z')
    {
        return a;
    }
    else{
        char temp=a-'A'+'a';
        return temp;
    }
    
}
int main(){
    char p[10]="Malayalam";
    int i=0,j=length(p)-1;
    while(i<j)
    {
        if(tolowercase(p[i])==tolowercase(p[j])){
            i++;
            j--;
        }
        else{
            cout<<"not a palindrome";
            return 0;
        }
    }
    cout<<"Is a palindrome";
}