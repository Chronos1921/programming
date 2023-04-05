#include <iostream>
#include <array>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
using namespace std;
int main(){
    int arr[]={-2,6,-3,-5,-9,7,15,-21,18};
    int i=0;
    int j=sizeof(arr)/sizeof(arr[0])-1;
    int k=j;
    while(i<j){
        while (arr[i]>0){
            i++;
        }
        while(arr[j]<=0){
            j--;
        }
        if(i<j){
        swap(&arr[i],&arr[j]);
        }
    }
    for (int i = 0; i < k+1; i++)
    {
        cout<<arr[i]<<endl;    
    }
    
}