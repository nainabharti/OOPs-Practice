//arrays of objects
#include <iostream>
using namespace std;
class employee {
    char name[30];  //string as class member
    float age;
public:
    void getdata(void);
    void putdata(void);
};
void employee :: getdata(void){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}
void employee :: putdata(void){
    cout << "Name: "<< name <<"\n";
    cout << "Age: "<< age <<"\n";
}
//objects as arguments
class time{
    int hours;
    int minutes;
public:
    void gettime(int h, int m){
        hours = h; minutes = m;
    }
    void puttime(void){
        cout << hours <<"hours and ";
        cout << minutes <<" minutes "<<"\n";
    }
    void sum(time, time); //declareation of objects as arguments 
};
    void time :: sum(time t1, time t2){
        minutes = t1.minutes + t2.minutes;
        hours = minutes/60;
        minutes = minutes % 60;
        hours = hours + t1.hours +t2.hours;
    }
const int size=3;
int main(){
    employee manager[size];
    for(int i=0; i<size; i++){
        cout<<"\nDetails of manager "<<i+1<<"\n";
        manager[i].getdata();
    }
    cout << "\n";
    for(int i = 0; i<size; i++){
        cout<<"\nManager" << i+1 <<"\n";
        manager[i].putdata();
    }

    cout<<"\n";
    time T1, T2, T3;
    T1.gettime(2,45); //get T1
    T2.gettime(3,30); // get T2
    T3.sum(T1, T2);
    cout << "T1 = "; T1.puttime();
    cout << "T2 = "; T2.puttime();
    cout << "T3 = "; T3.puttime();
    return 0;
}