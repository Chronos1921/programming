#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void display(){
    struct node *p=head;
    if(p==NULL){
        cout<<"NO elements";
    }
    else{
        while(p!=NULL){
            cout<<p->data<<"-->";
            p=p->next;
        }
    }
}
void create(int data){
    struct node* newNode=new node();
    struct node *p=head;
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=newNode;
    }
}
void atbegin(int data){
    struct node *newNode=new node();
    struct node* p=head;
    newNode->data=data;
    head=newNode;
    newNode->next=p;
}

void sum(){
    struct node *p=head;
    int sum=0;
    if(p==NULL){
        cout<<"NO elements";
    }
    else{
        while(p!=NULL){
            sum+=p->data;
            p=p->next;
        }
    }
    
    cout<<"\nSum : "<<sum<<endl;
}
void length(){
    struct node *p=head;
    int count=0;
    if(p==NULL){
        cout<<"NO elements";
    }
    else{
        while(p!=NULL){
        count++;
        p=p->next;
    }
    }
    
    cout<<"\nLength : "<<count<<endl;
}
void maxele(){
    struct node *p=head;
    int max=0;
    if(p==NULL){
        cout<<"NO elements";
    }
    else{
        while(p!=NULL){
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }
    }
    
    cout<<"\nMax : "<<max<<endl;
}
void search(int data){
    struct node *p=head;
    if(head==NULL){
        cout<<"NO elements";
    }
    else{
        while(p->next!=NULL){
            if(p->data==data){
                cout<<"Element Found"<<endl;
                break;
            }
            p=p->next;
        }
        if(p->next==NULL){
            cout<<"Not found";
        }
    }
}
void afterpos(int pos,int data){
    struct node *newNode = new node();
    newNode->data=data;
    struct node* p=head;
    int count=1;
     if(head==NULL){
        cout<<"NO elements";
    }
    else{
        for(int i=0;i<pos-1 && p;i++){
            if(p==NULL){
                cout<<"there are only ";
            }
            p=p->next;
        }
        newNode->next=p->next;
        p->next=newNode;
    }
    display();
    
}
void deletefirst(){
    struct node* p=head;
    int x=p->data;
    head=p->next;

    delete(p);
    cout<<"\n"<<x<<" deleted\n";
    display();
    cout<<"\n";
    
}
void deletelast(){
    node *p=head->next;
    node *q=head;
    while(p->next!=NULL){
        q=q->next;
        p=p->next;
    }
    delete(p);
    q->next=NULL;
    display();
}
void deleteatpos(int pos){
    cout<<"\nDelete at Pos :\n";
    node *p=head;
    node* q=NULL;
    for(int i=0;i<pos-1 && p;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    int x=p->data;
    delete(p);
    cout<<"\n"<<x<<" deleted\n";
    display();
    cout<<"\n";

}
void isSorted(){
    node *p=head;
    int x=-3000;
    while(p!=NULL){
        if (x>p->data){
            cout<<"Not sorted";
            break;
        }
        else{
            x=p->data;
            p=p->next;
        }
    }
    cout<<"\nSorted\n";
}
void deleteduplicates(){
    node* p=head->next;
    node* q=head;
    while(p!=NULL){
        if(p->data!=q->data){
            q=p;
            p=p->next;
        }else{
            q->next=p->next;
            delete(p);
            p=q->next;
        }
    }
    display();
}
void reverse(){
    node *p=head;
    node *q=NULL;
    node *r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
    display();
}
void recreverse(node *p,node *q){
    if(p!=NULL){
        recreverse(p->next,p);
        p->next=q;
    }
    else{
        head=q;
    }
}
int main(){
    /*create(10);
    create(20);
    create(30);
    isSorted();
    atbegin(60);
    display();
    length();
    sum();
    maxele();
    search(60);
    afterpos(4,45);
    deleteatpos(2);
    deletefirst();
    deletelast();*/
    create(10);
    create(20);
    create(20);
    create(20);
    create(40);
    display();
    cout<<"\n";
    //deleteduplicates();
    //reverse();
    recreverse(head,NULL);
    display();
}
