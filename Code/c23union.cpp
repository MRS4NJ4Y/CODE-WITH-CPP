//**************************** Union in C++ **************************
/*  
    in C++, A union us a user-defined datatype similar to a struct, but with a key difference:
    All members of a union share memory locations this means a union can only hold one value at a time,
    and updating one member will overwrite all members the previous one.
    Syntax:
    union union_name{
        data_type member_name1;
        data_type member_name2;
        data_type member_name3;
    };
*/

#include<iostream>
using namespace std;

union carshoping{
        char name;
        int discount;
        float price;
    };

int main() {

    carshoping car1;
    car1.name = 'A';
    cout << "Name: " << car1.name << endl;
    car1.discount =10;
    cout << "Discount: " << car1.discount << "%" << endl;
    car1.price =6888.5;
    cout << "Price: $" << car1.price << endl;
    cout<<endl;
    

//************************* typedef in Union *********************************
/*
    The typedef in c++ is used to define a union and create an alias for it. 
    This allows us to use the alias instead of the union keyword when defineing variables of the union.
    Syntax:
    typedef union union_name{
        data_type member_name1;
        data_type member_name2;
        data_type member_name3;
    }alias_name;
*/

    typedef union studentdata{
        int age;
        char grade;
        float GPA;
    }sdata;

    sdata s1;
    s1.age = 21;
    cout << "Age: " << s1.age<< endl;
    s1.grade ='A';
    cout << "Grade: " << s1.grade << endl;
    s1.GPA =8.5;
    cout << "GPA: " << s1.GPA<< endl;

    return 0;
}