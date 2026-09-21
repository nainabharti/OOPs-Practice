//function overloading
#include<iostream>
using namespace std;
/*
class Add {
public:
//x,y,two int addition
    int sum(int x,int y)
    {
        cout<<"sum of 2 int "<<endl;
        return x+y;
    }  
    //x,y,z,three int add
    int sum(int x, int y, int z)
    {
        cout<<"sum of 3 int "<<endl;
        return x+y+z;
    }
    //double add
    double sum(double x, double y)
    {
        cout<<"Sum of 2 doubles "<<endl;
        return x+y;
    }
};
int main()
{
    int x=5 , y=5;
    int z=2;
    Add add;
    cout<<add.sum(x,y)<<endl;
    cout<<add.sum(x,y,z)<<endl;
    cout<<add.sum(5.4, 2.3)<<endl;
    return 0;
}
*/
//operator overloading
/*
class Complex
{
    public:
    int real;
    int imag;
    Complex(){
        real = imag = -1;
    }
    Complex(int r, int i): real(r), imag(i){ }
    Complex operator + (const Complex &B)
    {
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }
    void print()
    {
        printf("[%d + i%d]\n", this->real, this->imag);
    }
};
int main()
{
    Complex  A(2,5);
    A.print();
    Complex B(3,3);
    B.print();

    Complex C = A + B;
    C.print();
    return 0;
}
*/
//runtime polymorphism
class shape{
    public:
    virtual void draw(){
        cout<<"Drawing a generic shape "<<endl;
    }
};
class circle: public shape{
    public:
    void draw() override{
        cout<<"drawing a circle "<<endl;
    }
};
class rectangle : public shape
{
    public:
    void draw () override
    {
        cout<<"drawing a rectangle "<<endl;
    }
};
class triangle : public shape
{
    public:
    void draw() override{
        cout<<"drawing a triangle "<<endl;
    }
};
void shapedrawing(shape *s)
{
    s->draw();//draw is polymorphic
}
int main(){
    /*
    circle c;
    rectangle r;
    shapedrawing(&c);
    shapedrawing(&r);

    triangle *t =new triangle();
    shapedrawing(t);
    */
   shape *s = new shape();
   s->draw();

   //upcasting
   shape *s3 = new circle();
   s3->draw();

   circle *c = new circle();
   c->draw();

   //downcasting

   shape *s2 = new circle();
   circle *c2 = (circle*)s2;
   c2->draw();
    return 0;
}
