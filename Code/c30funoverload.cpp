#include<iostream>
using namespace std;

int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int a, int b){
    return a + b ;
}

// claculate the value of a cylinder
int volume(double r, int h){
    return (3.141*r*r*h);
}

//calculte the valume of cube
int volume (int a){
    return a*a*a;
}

int main() {
    cout <<"sum of three num(10,10,20): " <<sum(10 ,10 ,20) <<endl;
    cout<<"sumof two num(10,15): "<<sum(10, 15)<<endl;
    cout<<"valume of cylinder(r=10,h=15): "<<volume(10, 15)<<endl;
    cout<<"volume of cube(a=10): "<<volume(10)<<endl;
    return 0;
}