#include<iostream>
using namespace std;
int main(){
    int arr1[]={2,5,7,8,10,13,78};
    int arr2[]={2,4,5,6,7,9,10};
    int m=sizeof(arr1)/sizeof(int);
    int n=sizeof(arr2)/sizeof(int);
    int arr3[m+n];
    int i,j,k;
    i=j=k=0;
    //difference
    while (i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];

        }
        if(arr1[i]>arr2[j]){
            j++;

        }
        if(arr1[i]==arr2[j]){
            i++;
            j++;
        }

    }
    while(i<m){
        arr3[k++]=arr1[i++];
    }
    for (int  i = 0; i < k; i++)
    {
        cout<<arr3[i]<<"  ";
    }
    
    
}