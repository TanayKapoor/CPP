#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if ((age>18) && (age<150))

    {
        cout<<"You can vote"<<endl;
    }
    else if((age<18) && (age>0))
    {
        cout<<"You cannot vote"<<endl;
    }
    else if((age>150) && (age<0))
    {
        cout<<"How are you alive?"<<endl;
    }
    
    return 0;
}
