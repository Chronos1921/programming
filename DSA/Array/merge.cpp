#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,5,7,9,12,45,67,81};
    int arr2[]={2,4,7,8,10,45};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[m+n];
    int i=0,j=0,k=0;
   /* while (i<m && j<n){
        if (arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    for(;i<m;i++){
        arr3[k++]=arr1[i];
    }
   for(;j<n;j++){
        arr3[k++]=arr2[j];
    }
    for (int a=0;a<m+n;a++){
        cout<<arr3[a]<<"   ";
    }
    */
   //UNION
   while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];

        }
        else{
            arr3[k++]=arr1[i++];
            j++;
        }
   }
   for(;i<m;i++){
        arr3[k++]=arr1[i];
    }
   for(;j<n;j++){
        arr3[k++]=arr2[j];
    }
    for (int a=0;a<k;a++){
        cout<<arr3[a]<<"   ";
    }
    
}