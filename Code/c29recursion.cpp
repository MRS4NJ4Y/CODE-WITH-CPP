#include<iostream>
using namespace std;

// factorial of a number:
// 6! = 6*5*4*3*2*1=720
// 0!= 1 by definition
// n!=n*(n-1)!

int factorial(int x){
    if(x<=1){
        return 1;
    }
    return x * factorial(x-1);
}

int fibonacci(int y){
    if(y<=1){
        return y; 
    }
    return fibonacci(y-2)+fibonacci(y-1);
}

int main() {
    int fact, fib;
    cout<<"Enter the number for fact: "<<endl;
    cin>>fact;
    cout<<"fact: "<<factorial(fact)<<endl;
    cout <<"enter the number for fib: "<<endl;
    cin>>fib;
    cout<<"fib: "<<fibonacci(fib)<<endl;
    return 0;
}