#include<iostream>
using namespace std;

int main(){
    int sub1, sub2, sub3, tmark;
    float percent;
    cout<<"----------"<<endl;
    cout<<"Grade Calculator Max 3 SUBJECTS"<<endl;
    cout<<"----------"<<endl;
    cout<<"Enter the total marks per subject: ";
    cin>>tmark;
    tmark*=3;
    cout<<"Enter marks in FIRST subject: ";
    cin>>sub1;
    cout<<"Enter marks in SECOND subject: ";
    cin>>sub2;
    cout<<"Enter marks in THIRD subject: ";
    cin>>sub3;

    percent = ((sub1+sub2+sub3)*100)/tmark;

    cout<<"----------"<<endl;
    cout<<"Percentage: "<<percent<<"%"<<endl;

    if (percent>70)
    {
        cout<<"Grade: A"<<endl;
    }
    else if (percent>50)
    {
        cout<<"Grade: B"<<endl;
    }
    else if (percent>30)
    {
        cout<<"Grade: C"<<endl;
    }
    else
    {
        cout<<"Grade: F"<<endl;
    }
    cout<<"----------"<<endl;

    return 0;
}