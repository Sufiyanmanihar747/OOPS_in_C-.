#include<iostream>
using namespace std;
class hero{
    private:
        int health;
    public:
        char level;
    hero(int health){
        // here this is pointer which point to current object
        cout<<"the value of this is "<<this<<endl;
        this->health=health;
    }
    hero(int health,char level){
        // here this is pointer which point to current object
        cout<<"the value of this is "<<this<<endl;
        this->health=health;
        this->level=level;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};

int main(){
    //object created statically

    // hero ramesh(10);
    // cout<<"the addres "<<&ramesh<<endl;

    hero temp(20,'b');
    temp.print();
    //Dynamically 
    hero *h=new hero(1);
}