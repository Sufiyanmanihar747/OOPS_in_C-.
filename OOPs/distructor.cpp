#include<iostream>
using namespace std;
class hero{
    public:
    //constructor
    hero(){
        cout<<"constructor called "<<endl;
    }
    //distructor
    ~hero(){
        cout<<"distructor called "<<endl;
    }
};
int main(){
    //statically allocation
    hero a;

    //dynamically allocation
    hero *b = new hero;
    delete b;                      //it will call distructor manually

}