#include <iostream>
using namespace std;
//example of parameterised constructor
class point{
    int x,y;
public:
    point(int a, int b){       //inline parameterised constructor definition
        x = a;
        y = b;
    }
    void display(){
        cout << "("<<x<<","<<y<<")\n";
    }
};
//overloaded constructors
class complex{
    float x, y;
public:
    complex(){ }    //constructor no arg
    complex(float a){x = y = a;}      //constructor-one arg
    complex(float real , float imag){  //constructor-two args
        x = real; y = imag;
    }
    friend complex sum(complex, complex);
    friend void show(complex);
};

complex sum(complex c1, complex c2)   //friend
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3);
}
void show(complex c){
    cout << c.x << " + j" << c.y << "\n";
}
int main(){
    point p1(1,1); //invokes parameterized constructor 
    point p2(5,10);
    cout<<"point p1 = ";
    p1.display();
    cout<<"point p2 = ";
    p2.display();

    cout<<"\n\n";
    complex A(2.7, 3.5);   //define and initialize
    complex B(1.6);        //define and initialize
    complex C;             //define

    C = sum(A, B);
    cout << "A = "; show(A);       //sum() is a friend
    cout << "B = "; show(B);       //show() is also friend
    cout << "C = "; show(C);

    //another way to give initial values (second method)
    complex P,Q,R;
    P = complex(2.5, 3.9);
    Q = complex(1.6, 2.5);
    R = sum(P, Q);

    cout <<"\n";
    cout <<"P = "; show(P);
    cout <<"Q = "; show(Q);
    cout <<"R = "; show(R);

    return 0;
}