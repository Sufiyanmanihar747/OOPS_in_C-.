#include<iostream>
using namespace std;
class hero{
    private:
        int health;
    public:
        char level;

    //COPY CONSTRUCTOR (USER)  
    hero(hero& temp){
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    hero(int h,int l){
        this->health=h;
        // cout<<"health is "<<health<<endl;
        this->level=l;
        // cout<<"level is "<<level<<endl;
    }
    void print(){
        cout<<"health is "<<health<<endl;
        cout<<"level is "<<level<<endl;
    }    

};
int main(){
    hero ramesh(70,'C');
    ramesh.print();
    
    //copy constructor
    hero ritesh(ramesh);
    ritesh.print();

}