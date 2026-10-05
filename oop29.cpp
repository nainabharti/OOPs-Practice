#include <iostream>
using namespace std;
//overloading unary minus
class space {
private:
    int x;
    int y;
    int z;
public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator- ();                   //OVERLOAD UNARY MINUS
};
void space :: getdata(int a, int b, int c){
    x = a;
    y = b;
    z = c;
}
void space :: display(void){
    cout << "X = "<<x<<" ";
    cout << "Y = "<<y<<" ";
    cout << "Z = "<<z<<"\n";
}
void space :: operator- (){
    x = -x;
    y = -y;
    z = -z;
}
//overloading + operator
class complex{
    float x;                            //real part
    float y;                            //imaginary part
public:
    complex() { }
    complex (float real, float imag)
    { x = real; y = imag; }
    complex operator+ (complex);
    void display(void);
};

complex complex :: operator+ (complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return(temp);
}
void complex :: display(void){
    cout << x << " + j" << y <<"\n";
}

int main(){
    space S;
    S.getdata(10, -20, 30);
    cout << "S : ";
    S.display();

    -S;                           //ACTIVATES OPERATOR -() FUNCTION
    cout << "-S : ";
    S.display();

    complex C1, C2, C3;           //invokes constructor 1
    C1 = complex(2.5, 3.5);
    C2 = complex(1.6, 2.7);
    C3 = C1 + C2;

    cout << "C1 = "; C1.display();
    cout << "C2 = "; C2.display();
    cout << "C3 = "; C3.display();  
    
    return 0;
}