 //******************** Arrays In C++ ********************
 /*
    An array is a collection of items of similar type stored in contiguous memory locations.
    Syntax: int array[100]; //for integers values
 */

#include<iostream>
using namespace std;

int main() {
    int marks[5]={50, 65, 70, 85, 90};

// cout<<marks[0]<<endl<<marks[1]<<endl<<marks[2]<<endl<<marks[3]<<endl<<marks[4]<<endl<<marks[5]<<endl;

    //********************Using For Loop********************
    
    // for(int i=0; i<5; i++){
    //     cout<<"marks of student["<<i<<"]: "<<marks[i]<<endl;
    // }

    //********************Using While Loop********************

    // int i=0;
    // while(i<5){
    //     cout<<"marks of student["<<i<<"]: "<<marks[i]<<endl;
    //     i++;
    // }

    //********************Using Do-While Loop********************

    // int i=0;
    // do{
    //     cout<<"marks of student["<<i<<"]: "<<marks[i]<<endl;
    //     i++;
    // }while(i<5);

    //***********Pointer Arthemetic************************************

    int *p;
    p= marks;

    cout<<"the value of *p: "<<*p<<endl;
    cout<<"the value of *(p+1): "<<*(p+1)<<endl;
    cout<<"the value of *(p+2): "<<*(p+2)<<endl;
    cout<<"the value of *(p+3): "<<*(p+3)<<endl;
    cout<<"the value of *(p+4): "<<*(p+4)<<endl;

    return 0;
}