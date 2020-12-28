#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter you age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;

    
    default:
    cout<<"no spl cases"<<endl;
        break;
    }
    
    return 0;
}
