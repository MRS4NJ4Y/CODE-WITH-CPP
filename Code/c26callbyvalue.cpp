//****************************cell by value in c++ (pass by value) *******************
/*
    in cell by value, orignal value is not modified.
    
    in call by value, value being passed to the function is locally stored by the function
    parameter in stack memory location. if you change the value of function parameter,
    it is changed for the current function only. it will not change the value of variable inside
    the caller method such as main().
*/
#include<iostream>
using namespace std;

void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}

void swapbypointer(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swapbyref (int &val1, int &val2){
    int temp=val1;
    val1=val2;
    val2=temp;
}

int main() {
    int a=4, b=5;
    swap(a,b);
    cout<<"a="<<a<<endl<<"b="<<b<<endl; // a=4 b=5 not swapped

//****************************cell by reference in c++ (pass by pointer)*******************
/*
    in call by reference in, original value in modified because we pass reference(Address).

    here , address of the value is passed in the functtion, so actual and formal arguments share the 
    same address space. hence, value changed inside the function, is reflected inside as well as outside the function.

Note: to usderstant the cell by reference, must have the basic knowladge of pointters.

*/
    int num1=4, num2=5;
    swapbypointer(&num1, &num2);
    cout<<"num1="<<num1<<endl<<"num2="<<num2<<endl; // num1=5 num2=4 swapped
    
//**********************cell by reference in c++ (pass by refeence)*********************
/*
    the function gets the reference (or address) of the argument, so change affect the original variable.

*/
    int val1=4, val2=5;
    swapbyref(val1, val2);
    cout<<"val1="<<val1<<endl<<"val2="<<val2<<endl; // val1=5 val2=4 swapped
    

    return 0;
}