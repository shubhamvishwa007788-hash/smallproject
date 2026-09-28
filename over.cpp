#include<iostream>
using namespace std;
class p{
    public:
    virtual void sound(){
        cout<<"the p is work"<<endl;

    }
    //method override is process of the accesee the derived class me base class ke function ka version banati hai ye
     p()=default;
};
class q: public p{
    void sound()override{
        cout<<"the q is work"<<endl;

    }
};
class s: public p{
    void sound()override{
        cout<<"the s is work with p and q"<<endl;

    }

};
class t: public p{
    public:
    void sound()override{
        cout<<"the t is also member of p and q"<<endl;
    }
};

int main(){
    p*p1=new q();
    p *p2=new s();
    p* p3=new t();
    p1->sound();
    p2->sound();
    p3->sound();



    return 0;
}  