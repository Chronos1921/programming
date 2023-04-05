#include<iostream>
using namespace std;
int reversearr(int arr[],int n){
    for (int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
int main(){
    int arr[]={6,9,2,4,10,0,1,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    int revarr=reversearr(arr,n);

}