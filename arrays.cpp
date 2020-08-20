#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int marks[4] = {55, 69, 75, 85};
    int randommarks[4];
    randommarks[0]= 78;
    randommarks[1]= 16;
    randommarks[2]= 54;
    randommarks[3]= 57;
    cout<<"These are Marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=7854; // Value changed before printing
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are Random Marks"<<endl;
    cout<<"Using for loop ---->"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Value of marks "<<i<<" is: "<<marks[i]<<endl;
    }

    cout<<"Using While loop ---->"<<endl;
    while (i<4)
    {
        cout<<"Value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;
    }

    i =0; //Reseting initial value for loop to 0

    cout<<"Using do While loop ---->"<<endl;
    do
    {
        cout<<"Value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;
    } while (i<4);
    
    //Pointers with arrays
    cout<<"Using pointers ---->"<<endl;
    int* p = marks;
    cout<<"Value of marks[0] "<<*p<<endl;
    cout<<"Value of marks[1] "<<*(p+1)<<endl;
    cout<<"Value of marks[2] "<<*(p+2)<<endl;
    cout<<"Value of marks[3] "<<*(p+3)<<endl;
    

    return 0;
}