#include<iostream>
using namespace std;

// which is independent of class property
// only dependent on class
class hero{
    public:
    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }
};

int hero :: timeToComplete=5;
int main(){
    
    cout<<hero :: random()<<endl;
    cout<<hero :: timeToComplete<<endl;
}
