#include<iostream>
using namespace std;
class student{
    protected :
    int age=20;

   
};
class child: public student{
    public:
    void display(){
    cout<<"the child is play"<<age<<endl;
    }
};

int main(){
    child c;
    c.display();

    return 0;
}