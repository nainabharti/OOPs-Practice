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

    //constructor: Parameterised constructor 
    student(int id,int age,string name,int nos)
    {
        cout<<"student parameterised constructor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
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
   student A(1,15,"Ranu",6);
   student B(2,13,"Rahul",4);
   A.bunk();
   B.sleep();
   return 0;
}
