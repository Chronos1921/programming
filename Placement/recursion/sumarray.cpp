#include<iostream>
using namespace std;
int getsum(int *arr,int size){
    if (size==0)    
    {
        return 0;
    }
    if (size==1)
    {
        return arr[0];
    }
    
    int remainingpart=getsum(arr+1,size-1);
    int x=arr[0]+remainingpart;
    return x;
}
int main(){
    int arr[6]={2,5,3,7,8,9};
    int x=getsum(arr,6);
    cout<<x;
}