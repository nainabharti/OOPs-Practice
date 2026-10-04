#include <iostream>
#include <conio.h>
using namespace std;
int count = 0;
class test{
public: 
    test(){
        count++;
        cout << "\n\nConstructor Msg: Object number "<<count<<" created..";
    }
    ~test(){
        cout <<"\n\nDestructor Msg: Object number "<<count<<" destroyed..";
        count--;
    }
};
/*
class instruction{
    int *a;
public:
    instruction(int size){
        a = new int [size];
        cout << "\n\nConstructor Msg: Integer array of size "<<size<<" created..";
    }
    ~instruction(){
        delete a;
        cout << "\n\nDestructor Msg: Freed up the memory allocated for integer array";

    }
};
*/
int main(){
    cout << "Inside the main block..";
    cout << "\n\nCreating first object T1..";
    test T1;
    {
        cout << "\n\nInside Block 1..";
        cout << "\n\nCreating two more objects T2 and T3..";
        test T2, T3;
        cout << "\n\nLeaving Block 1..";
    }
    cout <<"\n\nBack inside the main block..";
/*
    cout<<"\n";
    int s;
    cout << "\n\nEnter the size of the array...";
    cin >> s;
    cout << "\n\nCreating an object of test class..";
    instruction T(s);
    cout << "\n\nPress any key to end the program..";
    getch();
    */
    return 0;
}