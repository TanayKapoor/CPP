#include<iostream>
//System included header file
// #include "sample.h" --> must be in directory for using USER CREATED HEADER FILE!!
using namespace std;

int main() {
    int a, b;
    cout<<"OPERATORS in CPP"<<endl;
    cout<<"Enter value for a ";
    cin>>a;
    cout<<"Enter value for b ";
    cin>>b;
    //Can use endl instead of "\n" for returning to new line
    cout<<"Airthmetic operators"<<endl;
    cout<<"ADD + : "<<a+b<<endl;
    cout<<"SUB - : "<<a-b;
    cout<<"\nMUL * : "<<a*b;
    cout<<"\nDIV / : "<<a/b;
    cout<<"\nMOD / : "<<a%b;
    cout<<"\nINCREMENT a++ : "<<a++;
    cout<<"\nINCREMENT ++a : "<<++a;
    cout<<"\nDECREMENT a : "<<a--;
    cout<<"\nINCREMENT b : "<<b++;
    cout<<"\nDECREMENT b : "<<b--<<endl<<endl;
     // Comparison Operators
    cout<<"Value for a==b "<<(a==b)<<endl;
    cout<<"Value for a!=b "<<(a!=b)<<endl;
    cout<<"Value for a<b "<<(a<b)<<endl;
    cout<<"Value for a>b "<<(a>b)<<endl;
    cout<<"Value for a<=b "<<(a<=b)<<endl;
    cout<<"Value for a>=b "<<(a>=b)<<endl;

    return 0;


}