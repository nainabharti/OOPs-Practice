//abstraction example
#include<iostream>
#include<conio.h>
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
/*
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
*/
//default argument
    float value(float p, int n, float r=0.15){
        int i=1;
        int year = 1;
        float sum = p;

        while(i<=n){
            sum = sum*(1+r);
            year =year+1;
            i++;
        }
        return(sum);
    }
    void printline(char ch = '*', int len =40){
        for(int i=1;i<=len;i++){
            cout<<ch<<" ";
        }
    }
    int main(){
    float amount;
    printline();
    amount = value(5000.05,5);
    cout<<"\n Final Value = "<<amount<<"\n\n";
    amount =value(10000.00,5,0.30);
    cout<<"\n Final Value = "<<amount<<"\n\n";
    printline('=');
    getch();
    return 0;
}