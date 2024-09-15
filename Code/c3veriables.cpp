#include<iostream>
using namespace std;
int glo=5; //globel veriables
void globel(){
    cout<<glo;
}
int main(){
    int a=10, b=20;
    float pi=3.14;
    char latter='S';
    int glo=50; //local veriables
    glo=100;
    cout<<"this is value of a= "<<a<<"\nthis is value of b= "<<b;
    cout<<"\nvalue of pi is: "<<pi;
    cout<<"\nvalue of char is: "<<latter;
    cout<<"\nvalue of local veriables is: "<<glo;
    cout<<"\nvalue of globel veriables is: ";
    globel();
    return 0;   
}