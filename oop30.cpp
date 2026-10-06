#include <iostream>
#include <cstring>
using namespace std;

// ================= VECTOR OPERATOR OVERLOADING =================

const int size = 3;

class vector
{
    int v[size];

public:
    // Default constructor
    vector()
    {
        for(int i = 0; i < size; i++)
            v[i] = 0;
    }

    // Parameterized constructor
    vector(int *x)
    {
        for(int i = 0; i < size; i++)
            v[i] = x[i];
    }

    // int * vector
    friend vector operator*(int a, vector b);

    // vector * int
    friend vector operator*(vector b, int a);

    // Input operator
    friend istream& operator>>(istream &din, vector &b);

    // Output operator
    friend ostream& operator<<(ostream &dout, const vector &b);
};

vector operator*(int a, vector b)
{
    vector c;

    for(int i = 0; i < size; i++)
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

ostream& operator<<(ostream &dout, const vector &b)
{
    dout << "(" << b.v[0];

    for(int i = 1; i < size; i++)
        dout << ", " << b.v[i];

    dout << ")";

    return dout;
}

int x[size] = {2, 4, 6};


// ================= STRING OPERATOR OVERLOADING =================

class String
{
    char *p;
    int len;

public:

    // Default constructor
    String()
    {
        len = 0;
        p = new char[1];
        p[0] = '\0';
    }

    // Constructor from character array
    String(const char *s)
    {
        len = strlen(s);
        p = new char[len + 1];
        strcpy(p, s);
    }

    // Copy constructor
    String(const String &s)
    {
        len = s.len;
        p = new char[len + 1];
        strcpy(p, s.p);
    }

    // Copy assignment operator
    String& operator=(const String &s)
    {
        if(this != &s)
        {
            delete[] p;

            len = s.len;
            p = new char[len + 1];
            strcpy(p, s.p);
        }

        return *this;
    }

    // Destructor
    ~String()
    {
        delete[] p;
    }

    // + operator
    friend String operator+(const String &s, const String &t);

    // <= operator
    friend int operator<=(const String &s, const String &t);

    // Display function
    friend void show(const String &s);
};


// + operator
String operator+(const String &s, const String &t)
{
    String temp;

    temp.len = s.len + t.len;

    delete[] temp.p;

    temp.p = new char[temp.len + 1];

    strcpy(temp.p, s.p);
    strcat(temp.p, t.p);

    return temp;
}


// <= operator
int operator<=(const String &s, const String &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);

    if(m <= n)
        return 1;
    else
        return 0;
}


// Display function
void show(const String &s)
{
    cout << s.p;
}


// ================= MAIN =================

int main()
{
    // Vector part

    vector m;

    vector n = x;

    cout << "Enter the elements of vector m: ";
    cin >> m;

    cout << "\n";

    cout << "m = " << m << "\n";

    vector p, q;

    p = 2 * m;

    q = n * 2;

    cout << "\n";

    cout << "p = " << p << "\n";

    cout << "q = " << q << "\n";


    // String part

    String string1, string2, string3;

    String s1 = "New";
    String s2 = "York";
    String s3 = "Delhi";

    string1 = s1;
    string2 = s2;

    string3 = s1 + s3;

    cout << "\nstring1 = ";
    show(string1);

    cout << "\nstring2 = ";
    show(string2);

    cout << "\nstring3 = ";
    show(string3);

    cout << "\n";

    if(string1 <= string3)
    {
        show(string1);

        cout << " smaller than ";

        show(string3);

        cout << "\n";
    }
    else
    {
        show(string3);

        cout << " smaller than ";

        show(string1);

        cout << "\n";
    }

    return 0;
}
