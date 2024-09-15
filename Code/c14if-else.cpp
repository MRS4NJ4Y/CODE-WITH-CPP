#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter marks: "<<endl;
    cin>>marks;
    if(marks<35){
        cout<<"Grade: Fail";
    }
    else if(marks==35){
        cout<<"Grade: D";
    }
    else if((marks>=35)&&(marks<50)){
        cout<<"Grade: C";
    }
    else if (marks<=60){
        cout<<"Grade: B";
    }
    else if (marks<=80){
        cout<<"Grade: A";
    }
    else{
        cout<<"Grade: A+";
    }

    return 0;
}