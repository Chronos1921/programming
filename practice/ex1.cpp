#include<iostream>
using namespace std;
class ar
{
    int lt;
    int bd;   
    int area;
    public:
 
    void get_data()
    {
        cout<<"Enter Length:-";
        cin>>lt;
        cout<<"Enter Breadth:-";
        cin>>bd;
    }
    void get_area()
    {
        area=lt*bd;
        cout<<area<<endl;
    }
    void add(ar r1,ar r2)
    {
        area=r1.area+r2.area;
        cout<<"The total area Is :-"<<area;
    }
};
int main()
{
    class ar r1,r2,r3;
    cout<<"For First Plot\n";
    r1.get_data();
    cout<<"The Area of the First Plot is ";
    r1.get_area();
    cout<<"For Second Plot\n";
    r2.get_data();
    cout<<"The Area of the Second Plot is ";
    r2.get_area();
    r3.add(r1,r2);
    cout<<r1.lt;
}