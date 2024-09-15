//************************************inline ffunction**********************
/*
  An inline function is a function where the compiler attempts to expand the function's code in place at each point where the function is called, 
  instead of making a traditional function call. Inline functions can improve performance by avoiding the overhead of a function call, 
  but they are suitable only for small function  
*/

#include<iostream>
using namespace std;

inline int squre(int x) { 
    return x*x; 
}

int product(int a, int b) {
  static int c=0;
  c=c+1;
  return a*b+c;
}

float moneyrec(int currentmoney, float facter =1.05) {
  return currentmoney*facter;
}


int main() {
    cout<<"squre of 5 is: "<<squre(5)<<endl;    

//******************************************Static functions ********************************
/*
  Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, 
  space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call. 
  This is useful for implementing coroutines in C/C++ or any other application where the previous state of function needs to be stored. 
*/

  int a=5, b=2;
  cout<<"product is: "<<product(a,b)<<endl;
  cout<<"product is: "<<product(a,b)<<endl;
  cout<<"product is: "<<product(a,b)<<endl;

//*********************************************Default Argument*******************************
/*
  A function can have default parameters.
  If no argument is provided for a parameter,
  the default value will be used.
*/

  int money = 100000;
  cout<<"if you have "<<money<<"Rs in your A/C, you will recive: "<<moneyrec
  (money)<<"Rs after 1 year" <<endl; //use default parameters
  cout<<"VIP if you have "<<money<<"Rs in your A/C, you will recive: "<<moneyrec
  (money, 1.5)<<"Rs after 1 year" <<endl; //use value which given in parameter

  return 0;

}