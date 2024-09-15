#include<iostream>
using namespace std;
int main(){
    float a=32.8f;  // we use 'f' to say taken float value to compiler. 
    long double b=32.8; //when we don't used 'f' in value compiler say that is double value because it's defult. we are also used 'b=32.8l' here 'l' say value is long double to compilor.
    long double c=32.8l; //we are also used 'b=32.8l' here 'l' say value is long double to compilor.

    cout<<"value a is: "<<a<<endl;
    cout <<"value b is: "<<b<<endl;
    cout <<"value b is: "<<c<<endl;
    // here value of a, b and c is same, but when we used function for overloading then it value is different from each other. 

    cout <<"the size of 32.8 is: "<<sizeof(32.8)<<endl;
    cout <<"the size of 32.8l is: "<<sizeof(32.8l)<<endl;
    cout <<"the size of 32.8L is: "<<sizeof(32.8L)<<endl;
    cout <<"the size of 32.8f is: "<<sizeof(32.8f)<<endl;
    cout <<"the size of 32.8F is: "<<sizeof(32.8F)<<endl;
    return 0;
}