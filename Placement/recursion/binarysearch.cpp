#include<iostream>
using namespace std;
bool binarysearch(int arr[],int start,int end,int key){
    int mid=start+(end-start)/2;
    //base case 
    if (start>end){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    if (arr[mid]<key)
    {
        binarysearch(arr,mid+1,end,key);
    }
    else
        binarysearch(arr,start,mid-1,key);
    
   //return false;
    
}
int main(){
    
    int arr[]={2,5,7,9,11,14,18,23,29};
    int size=9;
    bool bs=binarysearch(arr,0,size-1,25);
    cout<<bs;

}