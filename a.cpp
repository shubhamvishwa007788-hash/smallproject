//encaplulation mean like a capsule in this bacilayy public private protected etc;
#include<iostream>
//the protecd is simler to private  but it can not be acees the directly outside of the class that can be accessed inside the using rheinherit method

using namespace std;
class student {
    protected:
    string name ="shubham";
    int age=18;
    int  roll=7;
};
    class child: public student{//it is inherit method that can be acess the 
        public:
        void display(){
            cout<<name<<endl;
            cout<<age<<endl;
        }



    };
    class user: public student{
        public:
        void display(){
            cout<<roll<<endl;

        }

    };


int main(){
    child c;
    user p;

    c.display();
    p.display();
   
   
    return 0;
}