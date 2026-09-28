//getter is publicmember function that is used read or reutrn  the value in private memebr that is called the geeter
//setter is also pulbic member function that is used set or update the value that is claaed the setter 
#include<iostream>
using namespace std;
class student {
    public:
    string name;
    float value;
    void show(){
        cout<<name<<endl;
        cout<<value;



    }
};


int main(){
    student s;
    s.name="shubham";
    s.value=18;
    s.show();

    return 0;
}