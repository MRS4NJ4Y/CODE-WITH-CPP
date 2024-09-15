#include<iostream>
using namespace std;

//************************** Break Statement**************************************

/*
    used to exits the switch statement immediately. if not used, the program will continue to
    execute the code in following cases untail a break is encountered or the end Of Switch statement is reached.
    Syntax: break;
*/

int main() {
   
   cout<<"************** Break Statement****************"<<endl;
    for(int i=0; i<10; i++){
        if(i==5){
        break; //exit the loop when i equal 5 reached.
        }
        cout<<i<<endl;
    }

//************************** Continue Statement**************************************

/*
    it's used in loop to skip the rest of the current iteration and move to the next iteration.
    Syntax: continue;
*/
    cout<<"************* Continue Statement******************"<<endl;
    for(int i=0; i<10; i++){
        if(i%2==0){
            continue; //skip the rest of the loop body for even numbers.
        }
        cout<<i<<endl;
    }

//************************** Default Statement**************************************

/*
    provides a defult action when none of cases match the expression. it's optional.
    Syntax: default: {
        // code to be executed
    }
*/

    cout <<"**************** Default Statement***********"<<endl;
    char grade;
    cout<<"Enter the grade: ";
    cin>>grade;

    switch(grade){
        case 'A':{
            cout<<"Excallent";
            break;
        }
        case 'B':{
            cout<<"Good";
            break;
        }
        case 'C':{
            cout<<"Average";
            break;
        }
        default: {
            cout<<"Invalid grade";
        }

        return 0;
    }
}