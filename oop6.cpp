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
private:
    float *gpa;
    string gf;
public:
    //ctor:default ctor
    student()
    {
        cout<<"student default ctor called"<<endl;
    }
    student(int id, int age, string name, int nos, float gpa, string gf)
    {
        cout<<"student parameterised ctor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa=new float(gpa);
        this->gf=gf;
    }
    //copy ctor
    student(const student &srcobj)
    {
        cout<<"student copy ctor called"<<endl;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
    }
    void study()
    {
        cout<<this->name<<"studying"<<endl;
    }
    void sleep()
    {
        cout<<this->name<<" sleeping "<<endl;
    }
    void bunk()
    {
        cout<<this->name<<" bunking "<<endl;
    }
    //dtor
    ~student()
    {
        cout<<"student default  dtor called"<<endl;
        delete this->gpa;
    }
private:
    void gfchatting()
    {
        cout<<this->name<<" chatting with gf "<<endl;
    }
};
int main()
{
    student A(1,12,"name",5,7.8,"menu");
    cout<<A.age<<endl;
    //cout<<A.gf<<endl;//cannot be access
    //A.gfchatting();//cannot be access
    return 0;
}