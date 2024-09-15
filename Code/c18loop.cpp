/* Loops in c++: there are three types of loop in C++
    1. For Loop
    2. While Loop
    3. Do-While Loop*/ 

//********************* For Loop **********************************

/* Syntax of for loop:
    for(initialization; condition; updation){
        // code to be executed
    }
*/

#include<iostream>
using namespace std;
int main(){
    
    int i;
    for(i=0; i<10; i++){
        cout<<i<<endl;
    }

// infinite for loop: loop condition is infinite because condition is always true.
/* 
    int i;
    for(i=0; 5<10; i++){
        cout<<i<<endl;
    }
*/


//************************** Wlile Loop**************************************

/* Syntax of While Loop:
    while(condition){
        // code to be executed
    }
*/

    int j=0;
    while(j<10){
        cout<<j<<endl;
        j++;
    }

// infinite Whlie loop: loop condition is infinite because condition is always true.

/*
    int i;
    while(true){
        cout<<i<<endl;
        i++;
    }
*/

//************************** Do-Wlile Loop**************************************

    int k=0;
    do{
        cout<<k<<endl;
        k++;
    }while(k<10);

// infinite Do-Whlie loop: loop condition is infinite because condition is always true.

/*
     int k=0;
    do{
        cout<<k<<endl;
        k++;
    }while(true);
*/


    return 0;
}