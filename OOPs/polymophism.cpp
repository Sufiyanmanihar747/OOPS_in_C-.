#include<iostream>
using namespace std;
// IF WE WANT TO NAME SAME FUNCTION THEN WE MUST TO CHANGE IT PERIMETER
// CHANGIN RETURN TYPE GIVE ERROR

class A{
    public:
    void sayhello(){
        cout<<"hello"<<endl;
    }
    void sayhello(int a){
        cout<<"helloo"<<endl;
    }

};
int main(){
    A obj;
    obj.sayhello();

}