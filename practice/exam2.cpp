#include<iostream>
using namespace std;
class num2;
class num1
{
private:
    int a;
public:
void getData(int i)
    { a=i;}
    friend void swap(num1,num2);
};

class num2
{
private:
    int b;
public:
void getData(int i)
{b=i;}
   friend void swap(num1,num2);

};
void swap(num1 a,num2 b)
{
    int temp;
    temp=a.a;
    a.a=b.b;
    b.b=temp;
    cout<<"On Swapping:-\n"<<"a="<<a.a<<"and b="<<b.b;
}
int main()
{
    class num1 a;
    class num2 b;
    int i,j;
    cout<<"a=";
    cin>>i;
    cout<<"b=";
    cin>>j;
    a.getData(i);
    b.getData(j);
    swap(a,b);
}
