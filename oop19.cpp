//several different classes can use the same function name.
//member functions can access private data of the class.
//member function can call another member fuction directly, without using the dot operator.
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

    void result(){
    display();
    cout<<"Student passed "<<endl;

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
    s.result();
    t.display();
    return 0;
}
