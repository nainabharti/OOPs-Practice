//friend function
#include <iostream>
using namespace std;
class sample{
    int a;
    int b;
public:
    void setvalue(){
        a = 25; b = 40;
    }
    friend float mean(sample s);
};
float mean(sample s){
    return float(s.a + s.b)/2.0;
}
//using friend function to add data objects of two different classes
class ABC; //forward declaration
class XYZ{
    int data;
public:
    void setvalue(int value){
        data = value;
    }
    friend void add(XYZ, ABC);  //friend function declaration
};
class ABC{
    int data;
public:
    void setvalue(int value){
        data = value;
    }
    friend void add(XYZ, ABC);
};
void add(XYZ obj1 , ABC obj2){
    cout<<"sum of data values of XYZ and ABC objects using friend function = "<<obj1.data+obj2.data;
}
int main(){
    sample x;
    x.setvalue();
    cout << "Mean value = " << mean(x) <<"\n";

    cout<<"\n";
    XYZ X;
    ABC A;
    X.setvalue(5);
    A.setvalue(50);
    add(X, A); //Calling friend function
    return 0;
}