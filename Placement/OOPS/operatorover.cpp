#include<iostream>
using namespace std;
class B{
    public:
    int a;
    int b;
    int add(){
        return a+b;
    }
    void operator+(B &obj){
        int value1=this->a;
        int value2=this->b;
        cout<<"Output :"<< value1-value2<<endl;
    }
};
int main(){
    B obj1; 
    obj1.a=10;
    obj1.b=20;
    cout<<obj1.add();
    obj1 + obj1;
}