#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b= &a;
    // (Address of) operator
    cout<<"address of a using & : "<<&a<<endl;
    cout<<"address of a using b : "<<b<<endl;
    // (Dereference) operator
    cout<<"value at address b is: "<<*b<<endl;

    //Pointer to Pointer
    int** c = &b;
    cout<<"Address of B is: "<<&b<<endl;
    cout<<"Address of B is: "<<c<<endl;
    cout<<"value at address B is: "<<*c<<endl;
    cout<<"value at address B at address of B is: "<<**c<<endl;

    return 0;
}