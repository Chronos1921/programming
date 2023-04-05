#include<iostream>
using namespace std;
class book
{
    char code[20];
    float price;
    int qty;
    public:
    void get(void);
    void display(void);
};
void book::get (void)
{
    cout<<"Enter Code No:-  ";
    cin>>code;
    cout<<"Enter Book Price:-  ";
    cin>>price;
    cout<<"Enter Quantity:-  ";
    cin>>qty;
    
}
void book:: display(void)
{
    cout<<"Book Code no:-"<<code;
    cout<<"\nBook Price:-"<<price;
    cout<<"\nBook Quantity"<<qty;
}
int main()
{
    book b1;
    b1.get();
    b1.display();
}