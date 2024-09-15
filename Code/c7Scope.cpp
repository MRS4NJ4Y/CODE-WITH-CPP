// a variable's scope is the part of a program where the variable is valid. 
#include<iostream>
int c=50;
using namespace std;
int main(){
    int a, b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the Sum of a and b is: "<<c<<endl;
    cout<<"the global value c is: "<<::c;   //'::' used to talk about global variables otherwise local variables are performed task.

    return 0;
}