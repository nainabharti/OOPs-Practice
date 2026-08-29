#include<iostream>
#include<string>
using namespace std;
//base class for multiple inheritance
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
class ProjectManager
{
protected:
    string projectManaged;
public:
    ProjectManager(const string &project) : projectManaged(project){ }
    void manageproject()const
    {
        cout<<" Project Manager managing project: "<<projectManaged<<endl;
    }
};
class Teamlead
{
protected:
    int teamSize;
public:
    Teamlead(int size): teamSize(size){ }
    void leadteam () const
    {
        cout<<"Team lead leading a team of "<<teamSize<<" members "<<endl;
    }
};
//derived class for multiple inheritance
class Techlead : public Employee, public ProjectManager, public Teamlead
{
public: 
    Techlead(const string &empName, int empId, const string &project, int teamSize): Employee(empName, empId), ProjectManager(project), Teamlead(teamSize){ }
    void displayInfo() const
    {
        display();
        manageproject();
        leadteam();
    }
};
int main()
{
    Techlead techlead ("Anna Dev ",202,"Project X",5);
    techlead.displayInfo();
    return 0;
}