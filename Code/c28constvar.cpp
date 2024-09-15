//*****************************Conststant in c++**********************************
/*
  the const keyword is used to indicate that something is constant
  and cannot be modified after its initial assignment. 
  It can be applied to variables, pointers, 
  function parameters, member functions, and objects.  
*/

//**********************const variable*********************************


#include <iostream>
using namespace std;

int main() {
    const int x = 10;
    // x = 20;  // Error: x is read-only
    std::cout << " x: " << x << std::endl;

//*************************Const Keyword With Pointer Variables************************************
/* 
    When the pointer variable point to a const value:
    Syntax: 
    const data_type* var_name;
*/

    int k=10;
    char l= 'M';

    const int* i = &k;
    const char* j = &l;

    k = 9;      // Value of k and l can be altered,
    l = 'A';   // they are not constant variables

    // *i = 6;  //error: Assignment of read-only location
    // *j = 7;  //error: Assignment of read-only location

    cout << *i << "And " << *j<<endl;

//*******************************Const Keyword With Pointer Variables**********************
/*
    When the const pointer variable point to the value:
    Syntax:
    data_type* const var_name;
*/

    // x and y non-const var
    int m = 5;
    char n = 'A';

    // const pointer(i) pointing
    // to the var x's location
    int* const s = &m;

    // const pointer(j) pointing
    // to the var y's location
    char* const t = &n;

    // The values that is stored at the memory location can
    // modified even if we modify it through the pointer
    // itself No CTE error
    *s = 10;
    *t = 'D';

    // int o = 6;
    // char p = 'C';

    // CTE because pointer variable
    // is const type so the address
    // pointed by the pointer variables
    // can't be changed
    // i = &o;
    // j = &p;

    cout << *s << " and " << *t << endl;
    cout << i << " and " << t;

//*********************************Const Keyword With Pointer Variables******************************
/*
    When const pointer pointing to a const variable:
    Syntax:
    const data_type* const var_name;
*/
    int c{ 9 };
    const int* const d = &c;

    // *d=10;
    // The above statement will give CTE
    // Once Ptr(*d) value is
    // assigned, later it can't
    // be modified(Error)

    cout<<*d<<endl;

    return 0;
}