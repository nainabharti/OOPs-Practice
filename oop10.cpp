#include<iostream>
#include<string>
using namespace std;
class vehicle
{
protected:
    string name;
public:
    string model;
    int noOfTyres;
    vehicle(string _name, string _model, int _noOfTyres)
    {
        cout<<"I am inside vehicle ctor"<<endl;
        this->name=_name;
        this->model=_model;
        this->noOfTyres=_noOfTyres;
    }
public:
    void start_engine()
    {
        cout<<"Engine is starting "<<name<<" "<<model<<endl;
    }
    void stop_engine()
    {
        cout<<"Engine is stopping "<<name<<" "<<model<<endl;
    }
};
class car: public vehicle
{
public:
    int noOfDoors;
    string transmissionType;     
    car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType)
    : vehicle(_name, _model, _noOfTyres)
    {
        cout<<"I am inside car ctor "<<endl;
        this->noOfDoors= _noOfDoors;
        this->transmissionType= _transmissionType;
    }
    void startAC()
    {
        cout<<"AC has started of "<<name<<endl;
    }
};
int main()
{
    car A("Maruti 800","LXI",4,4,"Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();
    //cout<<A.name;//ye nhi chalega
    return 0;
}