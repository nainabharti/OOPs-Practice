#include <iostream>
#include <conio.h>
//overloading of the subscript operator
using namespace std;
class arr{
    int a[5];
public:
    arr(int *s)
    {
        int i;
        for(i = 0; i<5; i++)
        a[i]=s[i];
    }
    int operator[](int k){
        return (a[k]);
    }
};
//overloading of pointer-to-member operator
class test{
public:
    int num;
    test(int j){
        num = j;
    }
    test* operator ->(void){
        return this;
    }
};
//overloading function call operator
class sample{
public:
    void operator()(){
        cout<<"Function call operator called ";
    }
};
//overloading comma operator
class number{
public:
    int x;
    number(int a){
        x=a;
    }
    number operator,(number n){
        return n;
    }
};
int main(){
    int x[5] = {1,2,3,4,5};
    arr A(x);
    int i;
    for(i = 0; i<5; i++){
        cout <<x[i]<<"\t";
    }

    cout << "\n";
    test T(5);
    test *ptr = &T;

    cout << "T.num = " << T.num;
    cout << "\nPtr->num = "<<ptr->num;

    cout << "\nT->num = "<<T->num;

    cout<<"\n";

    sample obj;
    obj();

    cout<<"\n";
    number a(10), b(20);
    number c =(a,b);
    cout<<c.x;
    
    getch();
    return 0;
}