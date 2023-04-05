#include<iostream>
using namespace std;
int main(){
    int arr[]={4,-5,7,8,-16,6,2,-7,5,2,-13};
    int n=sizeof(arr)/sizeof(int);
    int max=0;
    int cur=0;
    for(int i=0;i<n;i++){
        cur=cur+arr[i];
        if(max<cur){
            max=cur;
        }
        if(cur<0){
            cur=0;
        }
    }
    cout<<max;
}