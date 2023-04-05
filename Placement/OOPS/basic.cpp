#include<iostream>
using namespace std;
class hero
{
   
private:
    int health;
    char level;

public:
    string name;
    hero(){
        cout<<"Constructor called"<<endl;
    }
    hero(int health,char level){
        this->health=health;
        this->level=level;
    }
   void sethealth(int health){
    this->health=health;
   }
   void setlevel(char level){
    this->level=level;
   }
   void gethealth(){
    cout<<this->health<<endl;
   }
   void getlevel(){
    cout<<this->level<<endl;
   }
};

int main(){
        // hero a;
        // a.sethealth(10);
        // a.gethealth();
        // a.setlevel('A');
        // a.getlevel();
        // //invoking copy constructor
        // hero b=a;
        // b.gethealth();
        // b.getlevel();
        // //dynamic allocation
        // hero *c=new hero;
        // c->sethealth(70);
        // c->gethealth();
        // c->getlevel();
    hero d(30, 'A');
    cout<<"=>D"<<endl;
    d.gethealth();
    d.getlevel();
    d.name="Sakshi";
    cout<<d.name<<endl;
    hero e(d);
    cout<<"=>E"<<endl;
    e.gethealth();
    e.getlevel();
    cout<<e.name<<endl;
   // d.sethealth(60);
    cout<<"new=>E"<<endl;
    d.name="kaushik";
    e.gethealth();
     cout<<d.name<<endl;
}