//nesting member function
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
const int m = 50;
class binary{
private:
    string s;
public:
    void read(void){
        cout<<"Enter a binary number: ";
        cin>>s;
    }

    void chk_bin(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i) != '0' && s.at(i) != '1'){
                cout<<"\n Incorrect binary number format...the program will quit ";
                getch();
                  exit(0);
            }
        }
    }
    void ones(void)
    {
        chk_bin();//calling member function
        for(int i =0; i<s.length(); i++){
            if(s.at(i) == '0')
              s.at(i) = '1';
            else
              s.at(i)='0';
        }
    }
    void displayones(void){
        ones();//calling member function
        cout<<"\n The 1's compliment of the above binary number is: "<<s<<"\n\n";
    }
};
//example of arrays within a class

class ITEMS{
private:
    int itemCode[m];
    float itemPrice[m];
    int count;
public:
    void CNT(void){count = 0;}
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};

void ITEMS :: getitem(void){
    cout<<" Enter item code: ";
    cin>>itemCode[count];
    cout<<" Enter item cost: ";
    cin>>itemPrice[count];
    count++;
}

void ITEMS :: displaySum(void){
    float sum = 0;
    for(int i =0; i<count; i++)
        sum = sum + itemPrice[i];
    cout<<" \n Total value : "<< sum <<"\n";
}

void ITEMS ::remove(void){
    int a;
    cout<< " Enter item code: ";
    cin>> a;

    for(int i =0; i<count; i++)
        if(itemCode[i] == a)
        itemPrice[i] = 0;
}

void ITEMS :: displayItems(void){
    cout<<"\n Code Price\n";

    for(int i=0; i<count; i++){
        cout<<"\n"<< itemCode[i];
        cout<<" "<<itemPrice[i];
    }
    cout << "\n";
}

int main(){
    binary b;
    b.read();
    b.displayones();
    getch;

    ITEMS order;
    order.CNT();
    int x;
    do{
        cout<<"\n You can do the following "
            <<"Enter appropriate number \n";
        cout<<"\n1 : Add an item ";
        cout<<"\n2 : Display total value ";
        cout<<"\n3 : Delete an item ";
        cout<<"\n4 : Display all items ";
        cout<<"\n5 : Quit ";
        cout<<"\n\nWhat is your option? ";

        cin>>x;
        switch(x){
            case 1 : order.getitem(); break;
            case 2 : order.displaySum(); break;
            case 3 : order.remove();break;
            case 4 : order.displayItems();break;
            case 5 : break;
            default : cout << "Error in input; try again\n";
        }
    } while(x != 5);
    return 0;
}
