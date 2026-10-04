#include <iostream>
#include <cstring>
using namespace std;
class String{
    char *name;
    int length;
public:
    String(){
        length = 0;
        name = new char[length + 1];
    }
    String (const char *s){
        length = strlen(s);
        name = new char[length + 1];

        strcpy(name, s);
    }
    void display (void){
        cout << name << "\n";
    }
    void join(String &a, String &b);
};
void String :: join(String &a, String &b){
    length = a.length + b.length;
    delete[] name;
    name = new char[length + 1];
    strcpy(name, a.name);
    strcat(name, b.name);
}

//constructing matrix objects
class matrix{
    int **p;    
    int d1, d2;
public:
    matrix (int x, int y);
    void get_element(int i, int j, int value)
    {p[i][j]=value;}
    int & put_element(int i, int j)
    {return p[i][j];}
};
matrix :: matrix(int x, int y){
    d1 = x;
    d2 = y;
    p = new int *[d1];               //creates an array pointers
    for(int i = 0; i < d1; i++)
    p[i] = new int[d2];              //creates space for each row
}

int main(){
    const char *first = "Joseph ";
    String name1(first) , name2("Louis ") , name3 ("Lagrange"), s1 , s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();

    cout<<"\n";
    int m, n;
    cout << "Enter size of matrix: ";
    cin >> m >> n;
    matrix A(m,n);     

    cout << "Enter matrix elements row by row \n";
    int i, j, value;

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++){
            cin >> value;
            A.get_element(i,j,value);
        }
    cout << "\n";
    cout << A.put_element(1,2);
    return 0;
}