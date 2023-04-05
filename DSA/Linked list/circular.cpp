#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;
};
node *head=NULL;
node *last=NULL;
void create(int arr[],int n){
    
    for(int i=0;i<n;i++){
            node *newNode=new node();
            newNode->next=head;
            newNode->data=arr[i];
        if(head==NULL){
           head=newNode; 
           last=newNode;
        }
        else{
            last->next=newNode;
            last=last->next;
        }
    }
}
void display(){
    node *p=head;
    do{
        cout<<p->data<<"-->";
        p=p->next;
    }while(p!=head);
}
void insert(int data,int pos){
    node *p=head;
    node * newNode=new node();
    newNode->data=data;
    int count=1;
    if(pos==0){
        if(head==NULL){
            head=newNode;
            newNode->next=head;
            last=newNode;
        }
        else{
        newNode->next=head;
        head=newNode;
        last->next=newNode;
        }
    }
    else{
        while(pos>count){
            count++;
            p=p->next;
        }
        newNode->next=p->next;
        p->next=newNode;
    }
}
void checkloop(){
    node *p=head,*q=head;
    int x=0;
    do{
        p=p->next;
        q=q->next->next;
        if(p==q){
            cout<<"Loop present";
            x=1;
            break;
        }

    }while(q!=NULL);
    if(x==0)
    cout<<"Linear";
}
int main(){
    int arr[]={3,4,5,6,7,8};
    int length=sizeof(arr)/sizeof(int);
    
    create(arr,length);
    //display();
   insert(20,2);
    display();
    checkloop();
}