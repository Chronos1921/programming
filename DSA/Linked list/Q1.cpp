#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node * head=NULL;

void display(){
    struct Node* p=head;
    if(head==NULL){
        cout<<"No element";
    }
    else{
        while (p!=NULL){
        cout<<p->data<<"-->";
        p=p->next;
        }
    }
    cout<<"\n";
}
void create(int data){
    struct Node *newNode=new Node();
    struct Node *p=head;
    newNode->data=data;
    newNode->next=NULL;
    //empty list
    if (head==NULL){
        head=newNode;
    }
    //append at end
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=newNode;
    }

}
void insertsort(int data){
    struct Node *p=head,*q=NULL;
    struct Node *newNode=new Node();
    newNode->data=data;
    newNode->next=NULL;
    if(data<p->data){
        newNode->next=head;
        head=newNode;
    }else{
        while(p!=NULL){
    
        if(data>p->data){
            q=p;
            p=p->next;
        }
        else{
            newNode->next=q->next;
            q->next=newNode;
            break;
        }
    } 
    if(p==NULL){
        q->next=newNode;
    }
    }
    
    display();
}
void reverse(){
    struct Node *p=head,*q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
    display();
    
}
void recreverse(Node *p,Node *q){
    if(p!=NULL){
        recreverse(p->next,p);
        p->next=q;
    }
    else{
        head=q;
    }
}
int main(){
    int array[]={3,5,7,9,10};
    for(int i=0;i<5;i++){
        create(array[i]);
    }
    display();
    insertsort(11);
    reverse();
    recreverse(head,NULL);
    display();
}