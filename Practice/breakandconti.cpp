#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 40; i++)
    {
        if (i==10){
            // break; //Prints till 9 --> then exits
            continue; //Prints everything --> but not 10
        }
        cout<<i<<endl;
    }
    

    return 0;
}