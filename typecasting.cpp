#include<iostream>
int c =76;
using namespace std;
int main(){
    // int a,b,c;
    // cout<<"Enter value of a: ";
    // cin>>a;
    // cout<<"Enter value of b: ";
    // cin>>b;
    // c = a+b;
    // cout<<"Sum is c "<< c <<endl;
    // cout<<"Global c is "<<::c;
    // return 0;
    // float d = 63.8;
    // long double e = 85.4;
    // cout<<"Value for d is "<< d << " Value of e is " << e;

    int x =45;
    float y = 4848.45;
    cout<<"value of x is "<<(float)x<<endl;
    cout<<"value of y is "<<(int)y<<endl;

    cout<<"Adding w/o typecasting "<< x + y<<endl;
    cout<<"Adding with typecasting "<< x + int(y)<<endl;
    cout<<"Adding with typecasting "<< x + (int)y<<endl;



    return 0;
}