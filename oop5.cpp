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
    float *gpa;

    //constructor:Default constructor
    student()
    {
        cout<<"student default constructor called"<<endl;
    }

    //constructor: Parameterised constructor 
    student(int id,int age,string name,int nos,float gpa)
    {
        cout<<"student parameterised constructor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
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
        delete this->gpa;
    }

};
int main()
{
   //dynamic allocation, or student pointer.
   student *A = new student (1,14,"babban",7,9.8);
   cout<<A->name<<endl;
   cout<<A->age<<endl;
   A->study();
   delete A;
   return 0;
}
