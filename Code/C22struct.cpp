
//************************Structure in C++****************************
/*
    struct short for structure, is an user-define data types avaliable in C++.
    it allows a user to combine data items of differents data types under a single name.
    
    syntax: 
    typedef struct struct_name{
        data_type member_name1;
        data_type member_name2;
        data_type member_name3;
    };

*/

#include<iostream>
using namespace std;

struct student {
    int roll_number;
    float marks;
    char grade;
};

int main() {
   
    student S1;
    S1.roll_number = 10;
    S1.marks = 86.5;
    S1.grade = 'A';

    student S2;
    S2.roll_number = 20;
    S2.marks =65.8;
    S2.grade = 'B';

    cout << "Student 1 Details: " << endl;
    cout << "Roll Number: " << S1.roll_number << endl;
    cout << "Marks: " << S1.marks << endl;
    cout << "Grade: " << S1.grade << endl;
    
    cout << "\nStudent 2 Details: " << endl;
    cout << "Roll Number: " << S2.roll_number << endl;
    cout << "Marks: " << S2.marks << endl;
    cout << "Grade: " << S2.grade << endl;

//********************** Typedef in structure**********************
/*
    The typedef in c++ is used to define a structure and create an alias for it. 
    This allows us to use the alias instead of the struct keyword when defineing variables of the structure.
    Syntax:
    typedef struct struct_name{
        data_type member_name1;
        data_type member_name2;
        data_type member_name3;
    }alias_name;
*/
    
    typedef struct employee{
        int id;
        char latter;
        float salary;
    } emp; //alias of employee
    
    emp e1;
    e1.id = 101;
    e1.latter= 'A';
    e1.salary = 50000.00;

    cout << "\nEmployee 1 Details: " << endl;
    cout << "ID: " << e1.id << endl;
    cout << "Latter: " << e1.latter << endl;
    cout << "Salary: " << e1.salary << endl;

    return 0;

}