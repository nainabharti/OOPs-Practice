#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    int rollno;
    char name[30];
    float marks;
public:
    void get_data(void)
    {
        cout<<"Enter Rollno: ";
        cin>>rollno;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void put_data();
};
void student :: put_data(){
    cout<<"Rollno: "<<rollno;
    cout<<"Name: "<<name;
    cout<<"Marks: "<<marks;
}
int main()
{
    student s1,s2;
    s1.get_data();
    s2.get_data();
    s1.put_data();
    cout<<endl;
    s2.put_data();
    return 0;
}