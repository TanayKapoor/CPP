#include<iostream>
using namespace std;

typedef struct Employee
{
    int id;
    char favCol;
    float sal;
} ep;

union money
{
    int erate;
    char fchr;
    float decimal;
};


int main(){
    enum friends{abc, def, ghi};
    friends f1 = abc;
    friends f2 = def;
    friends f3 = ghi;
    cout<<f1<<endl;
    cout<<f2<<endl;
    cout<<f3<<endl;


    ep tanay;

    union money m1;
    m1.erate = 55;
    m1. fchr = 'T';
    cout<<m1.fchr<<endl;

    tanay.id = 01;
    tanay.favCol = 'b';
    tanay.sal = 15000.52;

    cout<<"Values UNION are "<<tanay.id<<endl;
    cout<<"Values UNION are "<<tanay.favCol<<endl;
    cout<<"Values UNION are "<<tanay.sal<<endl;

    return 0;
}