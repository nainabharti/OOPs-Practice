//several different classes can use the same function name.
#include <iostream>
using namespace std;
class Student{
private:
    int marks;
public:
    void setMarks(int m){
        marks = m;
    }

    void display(){
        cout<<"Students display "<<endl;
        cout<< "Marks of the student is: "<< marks <<endl;
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
    s.setMarks(90);
    s.display();
    t.display();
    return 0;
}
