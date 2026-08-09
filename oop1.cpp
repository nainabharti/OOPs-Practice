#include<iostream>
#include<string>
using namespace std;
class student
{
public:  
    //Attributes
    int id;
    int age;
    string name;
    int nos;

    //constructor:Default constructor
    student()
    {
        cout<<"student default constructor called"<<endl;
    }
    //behaviour /methods /functions
    void study()
    {
        cout<<this->name<<" studying "<<endl;
    }
    void sleep()
    {
        cout<<this->name<<" sleeping "<<endl;
    }
    void bunk()
    {
        cout<<this->name<<" bunking "<<endl;
    }
    //destructor
    ~student()
    {
        cout<<"student default destructor called" <<endl;
    }

};
int main()
{
    student A;
    A.id = 1;
    A.age = 15;
    A.name = "Ranu";
    A.nos = 6;

    A.study();

    student B;
    B.id = 2;
    B.age = 15;
    B.name = "Rahul";
    B.nos = 5;

    B.bunk();
    
    return 0;
}
