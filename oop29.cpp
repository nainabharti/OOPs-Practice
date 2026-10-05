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
int main(){
    space S;
    S.getdata(10, -20, 30);
    cout << "S : ";
    S.display();

    -S;                           //ACTIVATES OPERATOR -() FUNCTION
    cout << "-S : ";
    S.display();
    
    return 0;
}