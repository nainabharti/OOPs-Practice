//abstractionexample
#include<iostream>
using namespace std;
/*
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
*/
//inline function
 inline float mul(float a, float b)
{
    return (a*b);
}
inline double div(double p, double q)
{
    return(p/q);
}
int main(){
    float a= 12.345;
    float b= 9.82;

    cout<<mul(a,b)<<"\n";
    cout<<div(a,b)<<"\n";
    return 0;
}