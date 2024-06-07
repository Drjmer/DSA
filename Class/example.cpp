#include<bits/stdc++.h>
using namespace std;
class Hero
{ //pivate by default
public:
    int health;
    char level;
    char *name;
    
    //static keyword
    static int Timelimit;

    //static functions
    static int random(){
        return Timelimit;
    }

    //constructor
    Hero()
    {
        cout<<"Constructor Bhai Called"<<endl;
        name=new char[100];
    }
    //parametrised constructor
    Hero(int health,char level)
    {
        cout<<"Parametrised Constructor Bhai Called"<<endl;
        this->health=health;
        this->level=level;
        
    }
    //copy constructor
    Hero(Hero& temp)
    {
        cout<<"Copy Constructor Bhai Called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
        // this->name=temp.name;--->do shallow copy

        //implementing deep copy instead of shallow copy
        char *t=new char[strlen(temp.name)+1];
        strcpy(t,temp.name);
        this->name=t;
        
    }
       


    //member functions
    int getHealth()
    {
      return this->health;  
    }
    void setHealth(int health)
    {
        this->health=health;
    }
    char getLevel()
    {
        return this->level;
    }
    void setLevel(char level)
    {
        this->level=level;
    }


    //Destructor
    //for dyanmically allocated object u have to manully delete that object
    ~Hero()
    {
        cout<<"Destructor bhai called!!"<<endl;
    }

};

int Hero::Timelimit=55;
int main()
{

    cout<<Hero::Timelimit<<endl;
    Hero drj;//static allocation
    Hero *drj_47=new Hero(); //dynamic allocation
    drj.setHealth(90);
    drj.setLevel('A');
    cout<<drj.getHealth()<<endl; 
    cout<<drj.getLevel()<<endl;
    Hero ramesh(50,'C');
    cout<<ramesh.health<<endl;
    cout<<ramesh.level<<endl;
    char naam[5]="raam";
    ramesh.name=naam;
    cout<<ramesh.name<<endl;

    Hero C=ramesh;


    ramesh.name[0]='k';
    cout<<ramesh.name<<endl;
    cout<<C.health<<endl;
    cout<<C.level<<endl;
    cout<<C.name<<endl;
    delete drj_47; //Destructor bahi called for drj_47;

    cout<<Hero::random()<<endl;

    //End of the program 
    //Destructor bhai called for the statically allocated objects 
}