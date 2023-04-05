#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

        node(int data){
            this->data=data;
            this->next=NULL;
        }
};
node* head=NULL;
node* tail=NULL;
void print(node* &head){
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;

    }
    
}
//insert at head;
void insertathead(int data){
    node* n1=new node(data);
    n1->next=head;
    head=n1;
    
}
void insertatend(int data ){
    node* temp=new node(data);
    if (tail==NULL)
    {
        
        node* t=head;
        while (t->next!=NULL)
        {
            t=t->next;
        
        }
        tail=t;
    }
    tail->next=temp;
    tail=tail->next;
}
void insertatpos(int pos,int data){
    node* temp=new node(data);
    if (pos==1)
    {
        insertathead(data);
    }
    else{
        node* ptr=head;
        int count=1;
        while (count!=pos-1)
        {
            if(ptr==NULL){
                cout<<"Cannot Insert Not enough elements!!";
                exit(0);
            }
            ptr=ptr->next;
            count++;
        }
        temp->next=ptr->next;
        ptr->next=temp;
        if (temp->next==NULL)
        {
             tail=temp;
        }
        

    }
    
    
}
void deleteatpos(int pos){
    int count=1;
    if (pos==1)
    {
        node* temp=head;
        head=head->next;
        delete temp;
    }
    else{
        node* ptr=head;
        while (count!=pos-1)
        {
            ptr=ptr->next;
            count++;
        }
        node* del=ptr->next;
        if (ptr->next->next==NULL)
        {
            tail=ptr;
        }
        
         
        ptr->next=ptr->next->next;
        delete del;
    }
    

}
int main(){
   // node* n1=new node(50);
    insertathead(60);
    insertathead(70);
    insertatend(50);
    insertatend(90);
    insertatpos(5,110);
    print(head);
    cout<<endl;
    deleteatpos(5);
    insertatend(5);
    cout<<tail->data<<endl;
    print(head);
}