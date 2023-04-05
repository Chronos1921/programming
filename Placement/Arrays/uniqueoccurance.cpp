#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,9};
    int i=0;
    int s=10;
    int j=10;
    int size=j-1;
    while (i<j) 
    {
        if(arr[i]+arr[j]==s){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            j--;
            i++;
        }
        else if (arr[i]+arr[j]>s){
            j--;
        }
        else
            i++;
    }
    
}