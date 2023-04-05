#include<iostream>
using namespace std;
bool isvowel(char c){
    cout<<c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    else 
    {
        return false;
        }
}
int length(char name[]){
    int n=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        n++;
    }
    
    return n;
}
int main(){
    char name[50]="aseiko";
    int count=0;
    //length of a string 
    int size=length(name);
    for (int i = 0,j=size-1;i<j ; i++,j--)
    {
        while (i<j && isvowel(name[i])==0)      
        {
            i++;
        }
        while (i<j && isvowel(name[j])==0)      
        {
            j--;
        }
        if(i<j){
            swap(name[i],name[j]);
        }
    }
    
  cout<<name;
}