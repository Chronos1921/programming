#include<iostream>
using namespace std;
struct Pair{
    int min;
    int max;
};
Pair getminmax(int arr[],int n){
     struct Pair var;
    var.max=var.min=arr[0];
    if (n==1){
        return var;
    }
    if (arr[0]>arr[1]){
        var.max=arr[0];
        var.min=arr[1];

    }
    else {
        var.max=arr[1];
        var.min=arr[0];
        for(int i=2;i<n;i++){
            if (arr[i]>var.max){
                var.max=arr[i];
            }
            if (arr[i]<var.min){
                var.min=arr[i];
            }
        }

    }
    return var;
}
int main(){
   
    int arr[5]={1,5,20,8,6};
    int n=sizeof(arr)/sizeof(int); 
    Pair minmax=getminmax(arr,n);
    cout<<"Max element = "<<minmax.max<<endl;
    cout<<"Min element = "<<minmax.min;
}