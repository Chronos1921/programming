#include<iostream>
using namespace std;
int len(char c[]){
    int count=0;
    for (int i = 0; c[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
char revstr(char str[],int i,int j){
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return *str;
    
}
int main(){
    char str[30]="man plan goto tea malay";
    int x=len(str);
    int k=0;
    int i=0;
    /*for (int i =0 ; i <x; i++)
    {
        while(str[i]!=' ' ||str[i]=='\0'){
            i++;
            cout<<i<<"\t";
        }
        revstr(str,k,i-1);
        i++;
        k=i;
    }*/
    while(str[i]!='\0'){
        if(str[i]!=' '){
            i++;
        }
        //elseif()
        else{
            revstr(str,k,i-1);
            k=i;
            i++;

        }
    }
   //revstr(str,0,len(str)-1);
    cout<<str;
}