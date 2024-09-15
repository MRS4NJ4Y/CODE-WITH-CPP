//***********************Function in C++*****************************
/*
    A function is block of code that performs a specific task and cell be called other part of a program.
    Syntax:
    return_type function_name(parameter1_type parameter1_name, parameter2_type parameter2_name...){
    Function body
    perform some operations
    return value; //optional if retuen type is void
    }

*/
#include<iostream>
int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main() {
    int num1, num2;
    std::cout << "Enter first numbers: ";
    std::cin >> num1;
    std::cout << "Enter second numbers: ";
    std::cin >> num2;
    std::cout<<"the sum is: "<<sum(num1, num2)<<std::endl;

//**********************************Function prototype*******************
/*
    a function prototype in C++ is a declaration of a function that tells function name, return type,
    and parameters before the function is actually defined.
    Syntax:
    return_type function_name(parameter1_type, parameter2_type, ...);

*/

// Function prototype (declaration)
int add(int a, int b);
    
    int result = add(5, 10);  // Function can be called here
    std::cout << "The sum is: " << result << std::endl;
    
    return 0;
}

    // Function definition
    int add(int a, int b) {
        return a + b;
    }