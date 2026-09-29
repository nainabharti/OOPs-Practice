#include <iostream>
using namespace std;
class Student{
public:
    void display(){
        cout<<"Students display "<<endl;
    }
};

class Teacher{
public:
    void display(){
        cout<<"Teacher display ";
    }
};

int main(){
    Student s;
    Teacher t;
    s.display();
    t.display();
    return 0;
}