/* there are two types of header files:
1. System header files: it comes with the compiler */

#include<iostream>

// 2. User defined header files: it is written by the programmer
// #include<userheader.h> //--> this will produce an error if 'userheader.h' is no present in the current directory

int main(){
    std::cout <<"hello world";

    return 0;
}