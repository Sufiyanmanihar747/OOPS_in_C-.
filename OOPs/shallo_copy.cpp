#include<iostream>
#include<string.h>
using namespace std;

class hero{
    private:
        int health;
    public:
        char level;
        char *name;
    hero(){
        cout<<"default constructor called"<<endl;
        //best way to initialise array
        name=new char[100];
    }

    void setter_health(int h){
        health=h;
    }
    void setter_level(char l){
        level=l;
    }
    void setter_name(char name[]){
        strcpy(this->name,name);
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
        cout<<name<<endl;
        cout<<"------------------"<<endl;
    }
};
int main(){
    hero ramesh;
    ramesh.setter_health(56);
    ramesh.setter_level('d');
    char name[7]="babbar";
    ramesh.setter_name(name);
    cout<<"Before modify name"<<endl;   
    ramesh.print(); 
    hero ritesh(ramesh);
    ritesh.print();

    cout<<"After modify name"<<endl;   
    ramesh.name[0]='G';                 //Modifying ritesh name to G
    ramesh.print(); 
    ritesh.print();                    //change ritesh value also, this is called shallow copy
}