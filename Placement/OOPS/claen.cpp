#include<iostream>
using namespace std;
class Human{
    public:
        int height;
        string name;
    private:
        string id;
        void setheight(int height){
            this->height=height;
        }
        
};
class Male :public Human{
    public:  
    string head;
};
int main(){
    Male m;
    m.height=150;
    m.name="kaushik";
    m.head="oval";
    //m.id="20051921";
    cout<<m.height;
}