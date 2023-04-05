#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid= (e+s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int k=s;
    for (int i = 0; i <len1; i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;
     for (int j=0; j <len2; j++)
    {
        second[j]=arr[k++];
    }
    int index1=0;
    int index2=0;
    int mi=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mi++]=first[index1++];
        }
        else{
            arr[mi++]=second[index2++];
        }
    }
    while (index1<len1)
    {
        arr[mi++]=first[index1++];
    }
    while (index2<len2)
    {
        arr[mi++]=first[index2++];
    }
    
}
void mergesort(int *arr,int s,int e){
    int mid=(e+s)/2;
    if (s>=e)
    {
        return;
    }
    
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int arr[10]={6,9,11,-3,8,0,14,98,77,56};
    int n=10;

    mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}