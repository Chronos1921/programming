#include<iostream>
using namespace std;
bool linearsearch(int *arr,int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
        
    }
    else{
        bool remainingpart=linearsearch(arr+1,size-1,key);
        return remainingpart;
    }
    
    
}
int main(){
    int arr[6]={5,2,9,4,0,6};
    int size=sizeof(arr)/sizeof(int);
    bool ans=linearsearch(arr,size,7 );
    cout<<ans;

}