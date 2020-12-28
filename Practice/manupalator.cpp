#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // Common manupaltors --> endl and setw
    int a=3, b=54, c=4825;
    cout<<"value of a is: "<<setw(4)<<a<<endl;
    cout<<"value of b is: "<<setw(4)<<b<<endl;
    cout<<"value of c is: "<<setw(4)<<c<<endl;
    
    cout<<"value of a is without setw: "<<a<<endl;
    cout<<"value of b is without setw: "<<b<<endl;
    cout<<"value of c is without setw: "<<c<<endl;
    return 0;
}