#include<iostream>
using namespace std;

//ACCESSING PRIVATE MEMBER

class hero{
    private:
        int health;
        int level;
    public:
        void setter_health(int h){
            health=h;
        }
        void setter_level(int l){
            level=l;
        }
        int getter_health(){
            return health;
        }
        int getter_level(){
            return level;
        }
        void print(){
            cout<<health<<endl;
            cout<<level<<endl;
        }
};
int main(){
    hero ramesh;
    ramesh.setter_health(20);
    ramesh.setter_level(100);
    ramesh.print();
}