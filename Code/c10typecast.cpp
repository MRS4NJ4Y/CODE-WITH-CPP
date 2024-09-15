//**********Type Casting************
/* the type casting is known as type conversion. for example, suppose the given data in an integertype,
    and we want to convert in into float type. so, we need to manually cast int data to the float type,
    and this type of casting is called the type casting in c++. */

#include<iostream>
using namespace std;
int main(){
    int a =5;
    float b= 10.59;
    float c= float(b);

    cout<<"the value of a is: "<<(float)a<<endl;
    cout<<"the value of b is: "<<(int)b<<endl;
    cout<<"the value of b is: "<<int(b)<<endl;
    cout<<"the value of b is: "<<int(c)<<endl;

    cout<<"the expression is: "<<a+b<<endl;
    cout<<"the expression is:"<<a+int(b);
    
    return 0;
}