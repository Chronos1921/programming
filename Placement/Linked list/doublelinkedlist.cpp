#include<iostream>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;

        node(int data){
            this->prev=NULL;
            this->data=data;
            this->next=NULL;
        }
};
node *head=NULL;
node *tail=NULL;

void print(node* &head){
    node* temp=head;
    while (temp!=NULL){

        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<"\nhead :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;

}

int getlength(){
    node* temp=head;
    int count=0;
    while (temp!=NULL){

    
        temp=temp->next;
        count++;
    }
    return count;
}
void insertathead(int data){
    node* temp=new node(data);
    temp->prev=NULL;
    temp->next=head;
    head=temp;
}
void insertatend(int data){
    node *temp=new node(data);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void insertatpos(int pos,int data){
        if(pos==1){
            insertathead(data);
        }
        else{
            node* temp=head;
            int count=1;
            while (temp!=NULL && count!=pos-1)
            {
                temp=temp->next;
                count++;
            }
            if (temp->next==NULL)
            {
                insertatend(data);
            }
            else
            {
                node* newnode=new node(data);
             newnode->prev=temp;
            newnode->next=temp->next;
           newnode->next->prev=newnode;
            temp->next=newnode;
            }
            
            

            
        }
    }

void deleteathead(){
    node *temp=head;
    if (temp==NULL)
    {
        cout<<"Already empty";
    }
    else{
        head=head->next;
        delete(temp);
    }
    
}
void printrev(){
    node *temp=tail;
    cout<<"in reverse"<<endl;
    while (temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->prev;
    }
    cout<<endl;
}
void deleteatend(){
    node* temp=tail;
    tail=tail->prev;
    delete(temp);
}
int main(){
    node* node1=new node(10);
    head=node1;
    tail=node1;
    cout<<getlength()<<endl;
    //insertathead(70);
    
     //print(head);
    insertatend(90);
    insertatend(60);
    insertatend(80);
    //printrev();
   insertatpos(4,40);
   // deleteathead();
    //printrev();
    deleteatend();
    print(head);
     printrev();
}