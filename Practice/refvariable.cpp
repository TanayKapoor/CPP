#include<iostream>
using namespace std;
int main(){
    //reference variable
    float tk = 89.69;
    float & aa = tk;
    cout<<tk<<endl;
    cout<<aa;
    return 0;
}