#include <iostream>
using namespace std;
class array{

    int arr[20];
    int size;
    public:
    int length;
    void getsl(){
    cout<<"Enter the size of the array : ";
    cin>>size;
    arr[size];
    length=0;
    }
    void enter(){
        if(length<size){
        cout<<"Enter the element: ";
        cin>>arr[length];
        length++;
        }
        if(length==size)
        cout<<"The array is full"<<endl;

    }
    void display(){
        for (int i=0;i<length;i++){
            cout<<this->arr[i]<<"\t";
        }
        cout<<endl;
    }
    void insert(){
        int idx=-1;
        
        cout<<"Where do you want to insert?";
        cin>>idx;
        while(idx<0 || idx>this->length ){
            cout<<"Enter a valid position :";
            cin>>idx;
        }
        int cp=size;
        if (idx==size){
            cout<<"Enter element :";
            cin>>this->arr[idx];
            length++;
        }
        else{
        for (int i=cp;i>idx;i--){
            this->arr[i]=this->arr[i-1];
        }
        cout<<"Enter element :";
            cin>>this->arr[idx];
            length++;
        }
    }
    void del(){
        cout<<"Which element do you want to delete :";
        int idx;
        cin>>idx;
        if (idx<0 || idx>=size){
            cout<<"Enter valid input :";
            cin>>idx;
        }
        else{
            for (int i=idx;i<this->size-2;i++){
                this->arr[i]=this->arr[i+1];
            }
            length--;
            this->display();
        }
    }
    void bsearch(int key,int low,int high){
        
        while (low<=high){
            int mid=(low+high)/2;
            if (key==this->arr[mid]){
                cout<<"The element "<<key<<" is present at position :"<<mid<<endl;
                return;
            }
            else if(key<this->arr[mid]){
                high=mid-1;
            }
            else 
                low=mid+1;
        }
        cout<<"Not Found!";
    }
    void get(int idx){
        if(idx>=length){
            cout<<"Enter valid Index";
            return;
        }
        else{
            cout<<this->arr[idx]<<endl;
        }
    }
    void set(int idx){
        if(idx>=length){
            cout<<"Enter valid Index !"<<endl;
            return;
        }
        else{
            cout<<"Enter element :";
            int ele;
            cin>>ele;
            this->arr[idx]=ele;
            this->display();
        }
    }
    void max(){
        int max=this->arr[0];
        for(int i=1;i<length;i++){
            if (max<this->arr[i]){
                max=this->arr[i];
            }
        }
        cout<<"Max = "<<max<<endl;

    }
    void avg(){
        int sum=0;
        for (int i=0;i<length;i++){
            sum+=float(this->arr[i]);
        }
        cout<<"Average ="<<float(sum/(this->length))<<endl;
    }
    void reverse(){
        for (int i=this->length-1,j=0;i>j;i--,j++){
            int temp=this->arr[i];
            this->arr[i]=this->arr[j];
            this->arr[j]=temp;
        }
        this->display();
    }
    void sleft(){
        int temp=this->arr[0];
        for(int i=1;i<this->length;i++){
            this->arr[i-1]=this->arr[i];
        }
        this->arr[length-1]=temp;
        this->display();
    }
    void sright(){
        int temp=this->arr[length-1];
        for(int i=this->length-2;i>=0;i--){
            this->arr[i+1]=this->arr[i];
        }
        this->arr[0]=temp;
        this->display();
    }
    void insort(){
        cout<<"Enter the element :";
        int key;
        cin>>key;
        for(int i=this->length-1;i>0;i--){
            if(this->arr[i]<key){
                this->arr[i+1]=key;
            }
            if(this->arr[i]>key){
                this->arr[i+1]=this->arr[i];
            }
                

        }
        length++;
        this->display();
    }
    void isSorted(){
        for(int i=0;i<this->length-1;i++){
            if(this->arr[i]>this->arr[i+1]){
                cout<<"Array Not Sorted!!"<<endl;
                return;
            }
            else{
                cout<<"The array is sorted.";
            }
        }
    }
};
int main(){
    array ar1;
    ar1.getsl();
    char ch='Y';
    int choice;
    while (ch=='y' or ch=='Y'){
        cout<<"1.Append"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Insert"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Binary Search"<<endl;
        cout<<"6.Get(Index)"<<endl;
        cout<<"7.Set(Index)"<<endl;
        cout<<"8.Max element"<<endl;
        cout<<"9.Exit"<<endl;
        cout<<"10.Average"<<endl;
        cout<<"11.Reverse"<<endl;
        cout<<"12.ShiftLeft"<<endl;
        cout<<"13.ShiftRight"<<endl;
        cout<<"14.Inserting in sorted array"<<endl;
        cout<<"15.IsSorted"<<endl;

        cout<<"Enter your choice:-"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            ar1.enter();
            break;
        case 2:
            ar1.display();
            break;
        case 3:
            ar1.insert();
            break;
        case 4:
            ar1.del();
            break;
        case 5:
            int key;
            cout<<"Enter the element you want to search for: ";
            cin>>key;
            ar1.bsearch(key,0,ar1.length-1);
            break;
        case 6:
            int idx1;
            cout<<"Enter the index you want to get :";
            cin>>idx1;
            ar1.get(idx1);
            break;
        case 7:
            int idx2;
            cout<<"Enter the index you want to set :";
            cin>>idx2;
            ar1.set(idx2);
            break;
        case 8:
            ar1.max();
            break;
        case 9:
            exit(0);
        case 10:
            ar1.avg();
            break;
        case 11:
            ar1.reverse();
            break;
        case 12:
            ar1.sleft();
            break;
        case 13:
            ar1.sright();
            break;
        case 14:
            ar1.insort();
            break;
        case 15:
            ar1.isSorted();
            break;
        
        default:
            break;
        }

    }
}