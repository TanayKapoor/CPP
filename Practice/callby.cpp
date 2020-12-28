#include<iostream>
using namespace std;

//Call by refference using pointers
void swapPointer(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;

}
//Call by refference using reference variables
void refvar(int &a, int &b) {
    int t = a;
    a = b;
    b = t;

}

int sum(int a, int b){
    int c = a +b;
    return c;
}
int main(){int x= 4, y=6;
    cout<<"Sum of 4 and 5 is "<<sum(4, 5)<<endl;
    cout<<"Value of x is "<<x<<" | Value of y is "<<y<<endl;
    refvar(x, y);
    cout<<"Value of x is "<<x<<" | Value of y is "<<y<<endl;
    return 0;
}