# include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    bool condition = false;
    int a = 10,  b = 20;
    sum();
    int glo = 7;
    cout<<glo;
    float pi = 3.14;
    char c = 'U';
    cout<<"\nJust for FUN!!\n"<< condition;
    // cout<<"Value of a is "<<a<<"\nValue of b is "<< b;
    // cout<<"\nValue of pi is "<<pi;
    // cout<<"\nValue of c is "<<c;
    return 0;
}