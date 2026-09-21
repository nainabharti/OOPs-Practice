#include<iostream>
using namespace std;
class AbstractionExample{
    private:
    int num;
    char ch;
    public:
    void setMyValue(int n, char c){
        num=n; ch=c;
    }
    void getMyValue(){
        cout<<"Number is: "<<num<<endl;
        cout<<"Char is: "<<ch<<endl;
    }
};
int main()
{
    AbstractionExample A ;
    A.setMyValue(100, 'n');
    A.getMyValue();
    return 0;
}