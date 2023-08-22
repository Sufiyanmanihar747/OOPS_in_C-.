#include<iostream>
using namespace std;
class human{
    protected:
    int a;
    public:
    int height;
    int weight;
    void setter(int h){
        height=h;
    }
};

//INHERITANCE OF CLASS HUMAN
class male:public human{
    public:
    string color;

    //PROTECTED MEMBER CAN BE ACCESS BY ITS SUBCLASS
    void setterr(int pro){
        a=pro;
    }
};

int main(){
    male obj;
    cout<<obj.height<<endl;
    obj.setter(45);
    cout<<obj.height<<endl;

}