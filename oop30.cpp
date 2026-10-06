#include <iostream>
using namespace std;
const int size = 3;
class vector{
    int v[size];
public:
    //constructor 1
    vector()
    {
        for(int i = 0; i < size; i++)
            v[i] =0;
    }
    //constructor 2
    vector(int *x)
    {
        for(int i = 0; i < size; i++)
            v[i] = x[i];
    }
    //friend function: int * vector
    friend vector operator*(int a, vector b);
    //friend function: vector * int
    friend vector operator*(vector b, int a);
    //friend function for input
    friend istream& operator>>(istream &din, vector &b);
    //friend function for output
    friend ostream& operator<<(ostream &dout, vector &b);
};
vector operator*(int a, vector b)
{
    vector c;
    for(int i = 0; i<size; i++)
        c.v[i] = a * b.v[i];
    return c;
}
vector operator*(vector b, int a)
{
    vector c;
    for(int i = 0; i < size; i++)
        c.v[i] = b.v[i] * a;
    return c;
}
istream& operator>>(istream &din, vector &b)
{
    for(int i = 0; i < size; i++)
        din >> b.v[i];
    return din;
}
ostream& operator<<(ostream &dout, vector &b)
{
    dout << "(" << b.v[0];
    for (int i = 1; i<size; i++ )
        dout << " , " << b.v[i];
    dout << ")";
    return dout;
}
int x[size] = {2, 4, 6};
int main(){
    vector m;
    vector n = x;
    cout <<"Enter the elements of vector m: ";
    cin >> m;
    
    cout << "\n";
    cout << "m = " << m <<"\n";
     
    vector p, q;
    p = 2 * m;
    q = n * 2;

    cout <<"\n";
    cout << "p = " << p << "\n";
    cout << "q = " << q << "\n";

    return 0;
}