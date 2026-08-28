#include<iostream>
#include<string>
using namespace std;
class vehicle
{
protected:
    string name;
    string model;
    int noOfTyres;
public:
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
protected:
    int noOfDoors;
    string transmissionType;
public:
    car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType): vehicle(_name, _model, _noOfTyres)
    {
        cout<<"I am inside car ctor"<<endl;
        this->noOfDoors= _noOfDoors;
        this->transmissionType= _transmissionType;
    }
    void startAC()
    {
        cout<<"AC has started of "<<name<<endl;
    }
};
class motorcycle: public vehicle
{
protected:
    string handleBarStyle;
    string suspensionType;
public:
    motorcycle(string _name, string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType): vehicle(_name, _model, _noOfTyres)
    {
        cout<<"motorcycle ctor called"<<endl;
        this->handleBarStyle= _handleBarStyle;
        this->suspensionType= _suspensionType;
    }
    void wheelie()
    {
        cout<<"wheelie kar rhi hai "<<name<<endl;
    }
};
int main()
{
    car A("Maruti 800","LXI",4,4,"Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();
    //A.model;//not accessible
    motorcycle M("BMW","VXI",2,"U","Hand");
    M.start_engine();
    M.wheelie();
    M.stop_engine();
    return 0;
}