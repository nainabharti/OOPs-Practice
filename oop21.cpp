#include <iostream>
using namespace std;
//static class member
class item{
    static int count;
    int number;
public:
    void getdata(int a){
        number = a;
        count++;
    }
    void getcount(void){
        cout<<"count: "<<count<<"\n";
    }
};
int item :: count;

//static member function
class test{
    int code;
    static int count;
public:
    void setcode(void){
        code = ++count;
    }
    void showcode(void){
        cout<<"object number: "<<code<<"\n";
    }
    static void showcount(void){  //static member function
        cout<< "count: " << count <<"\n";
    }    
};

int test :: count;

int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"After reading data "<<"\n";
    a.getcount();
    b.getcount();
    c.getcount();

    //for second class

    cout<<"\n";
    test t1, t2;
    t1.setcode();
    t2.setcode();

    test :: showcount();
    test t3;
    t3.setcode();
    test :: showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}