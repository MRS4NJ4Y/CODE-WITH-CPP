#include<iostream>
using namespace std;

int main() {
    //*********************what is pointer *********************
    
    /*
        A pointer is a variable that stores the memory address of an object.
    */

    int a=30;
    int* b;
    b = &a; //Also Write 'int *b= &a;'

     // & --> (Address of) operater
    cout<<"the address of a is: "<<&a<<endl;
    cout<<"the address of b id: "<<b<<endl; 
    
    // * --> (value at) Dereference operater
    cout<<"the value of b is: "<<*b<<endl;

    //************************* Pointer to Pointer *********************************

/*
    the second pointer stored the address of of frist pointer.
*/

    int **c = &b;
    cout<<"the address of b is: "<<&b<<endl;
    cout<<"the address of c is: "<<c<<endl;
    cout<<"the value at address c is: "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is: "<<**c<<endl;

    return 0;
}