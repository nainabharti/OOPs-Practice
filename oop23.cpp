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
//swapping private data of classes
class class_2;
class class_1{
    int value1;
public:
    void indata(int a){
        value1 = a;
    }
    void display(void){
        cout << value1 <<"\n";
    }
    friend void exchange(class_1 &, class_2 &);
};
class class_2{
    int value2;
public:
    void indata(int a){value2 = a;}
    void display(void){cout << value2 <<"\n";}
    friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 & x, class_2 & y){
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
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

    cout<<"\n\n";
    class_1 C1;
    class_2 C2;
    C1.indata(100);
    C2.indata(200);
    cout << "Values before exchange " <<"\n";
    C1.display();
    C2.display();
    exchange (C1, C2);

    cout << "Values after exchange " <<"\n";
    C1.display();
    C2.display();
    return 0;
}