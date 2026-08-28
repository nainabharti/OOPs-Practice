#include<iostream>
#include<string>
using namespace std;
//base class for single inheritance
class Employee
{
protected:
    string name;
    int employeeId;
public:
    Employee(const string &empName, int empId): name(empName), employeeId(empId)
    { }
    void display() const
    {
        cout<<"Employee: "<<name<<" ID: "<<employeeId<<endl;
    }
};
//derived class for single inheritance
class Developer: public Employee
{
private:
    string programminglanguage;
public:
    Developer(const string &empName, int empId, const string &lang):Employee (empName, empId), programminglanguage(lang)
    { }
    void show () const
    {
        display();
        cout<<"Specialization : Developer, Programming language: "<<programminglanguage<<endl;
    }
};
int main()
{
    Developer dev("Ramu kaka ", 101, "C++");
    dev.show();
}