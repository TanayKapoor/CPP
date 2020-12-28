#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"Enter Third Number: ";
    cin>>c;
    cout<<"-----------"<<endl;
    if (a>c&&a>b)
    {
        cout<<a<< " is the largest number"<<endl;
    }
    if (b>c&&b>a)
    {
        cout<<b<< " is the largest number"<<endl;
    }
    if (c>a&&c>b)
    {
        cout<<c<< " is the largest number"<<endl;
    }
    
    cout<<"-----------"<<endl;


    return 0;
}