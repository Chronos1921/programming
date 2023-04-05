#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node * head1=NULL;
struct Node * head2=NULL;
void display1(){
    struct Node* p=head1;
    if(head1==NULL){
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
void display2(){
    struct Node* p=head2;
    if(head2==NULL){
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
void create1(int data){
    struct Node *newNode=new Node();
    struct Node *p=head1;
    newNode->data=data;
    newNode->next=NULL;
    //empty list
    if (head1==NULL){
        head1=newNode;
    }
    //append at end
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=newNode;
    }

}
void create2(int data){
    struct Node *newNode=new Node();
    struct Node *p=head2;
    newNode->data=data;
    newNode->next=NULL;
    //empty list
    if (head2==NULL){
        head2=newNode;
    }
    //append at end
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=newNode;
    }
}
void merge(){
    Node *p=head1;
    Node *q=head2;
    Node *last;
    Node * third;
    //display1();
    //display2();
    cout<<p->data<<endl;
    cout<<q->data<<endl;
    if(p->data<q->data){
        last=third=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        last=third=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data<q->data){
            last->next=p;
            last=last->next;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=last->next;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL){
        last->next=p;
    }
    else{
        last->next=q;
    }
    display2();
}
void checkloop(){
    Node *p=head2,*q=head2;
    while(q!=NULL){
        p=p->next;
        q=q->next->next;
    
        if(p==q){
            cout<<"Loop"<<endl;
            break;
        }
    }
    if(q==NULL)
    cout<<"No Loop";
}
void makeloop(){
    Node *p=head2;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=head2;
}
int main(){
    int array1[]={3,7,9,10};
    int array2[]={2,4,5,7,9,10,11,12};
    for(int i=0;i<4;i++){
        create1(array1[i]);
    }
    for(int i=0;i<8;i++){
        create2(array2[i]);
    }
    //display1();
    //display2();
    merge();
    makeloop();
    //display2();
    checkloop();

}