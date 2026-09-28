#include<iostream>
using namespace std;
class employee{
    public:
    virtual void work(){
        cout<<"the employeee work"<<endl;
         //employee()=default;
//method overide drived class  me ham base class ke function ka virsion bante hai that is claeed the method overideing
    }
     employee()=default;
};
class devloper:public employee{
    public:
    void work() override{
        cout<<"the devloper work together"<<endl;
    }
};
class tester: public employee{
    public:
    void work() override{
        cout<<"the tester test this is"<<endl;
    }
};
int main(){
    employee* employee1=new devloper();
    employee*employee2 =new tester();
    employee1->work();
    employee2->work();
    return 0;
}