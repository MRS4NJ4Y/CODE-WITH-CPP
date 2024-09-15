//**********************Manipulators in C++******************************
/* manipulators are used to formatting of output
    Ex- cout<<endl; (used for new line) */

#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    int a=5, b=543, c=54321;
    cout<<"the value of a is: "<<a<<endl;   
    cout<<"the value of b is: "<<b<<endl;
    cout <<"the value of c is: "<<c<<endl;  
    cout<<endl;

    cout<<"the value of a is: "<<setw(5)<<a<<endl; // 'setw' is used for right alignment of output.
    cout<<"the value of b is: "<<setw(5)<<b<<endl;
    cout<<"the value of c is: "<<setw(5)<<c<<endl;

    return 0;
}