#include<iostream>
using namespace std;
int main (){
    int num1, num2;
    cout<<"enter the value of num1"<<endl;
    cin>>num1;
    cout<<"enter the value of num2"<<endl;
    cin>>num2;
    cout<<"Operators in C++"<<endl; // '<<end1' used for new line
    cout<<"Following are the types of operators in C++:"<<endl;
    cout<<endl;
    
    cout<<"Arthemetic operator: used to perform mathematical operations"<<endl;
    cout<<"The value of num1 + num2="<<num1+num2<<endl;
    cout<<"The value of num1 - num2="<<num1-num2<<endl;
    cout<<"The value of num1 * num2="<<num1*num2<<endl;
    cout<<"The value of num1 / num2="<<num1/num2<<endl;
    cout<<"The value of num1 % num2="<<num1%num2<<endl;
    cout<<endl;

    cout <<"Relational/comparison Operators: Used to comapare two values."<<endl;
    cout<<"The value of num1 == num2="<<(num1==num2)<<endl;
    cout<<"The value of num1 != num2="<<(num1!=num2)<<endl;
    cout<<"The value of num1 > num2="<<(num1>num2)<<endl;
    cout<<"The value of num1 < num2="<<(num1<num2)<<endl;
    cout<<"The value of num1 >= num2="<<(num1>=num2)<<endl;
    cout<<"The value of num1 <= num2="<<(num1<= num2)<<endl;
    cout<<endl; 
    
   cout<<"Logical operators: used to perform logical operations"<<endl;
   cout<<"the value of logical and(&&) operator((num1==num2) && (num1>num2))="<<((num1==num2)&&(num1>num2))<<endl;
   cout<<"the value of logical OR(||) operator((num1==num2) && (num1>num2))="<<((num1==num2)||(num1>num2))<<endl;
   cout<<"the value of logical NOT(!) operator((num1==num2) && (num1>num2))="<<(!(num1==num2))<<endl;
   cout<<endl;

    cout<<"Assignment operators: used to Assign value to variable"<<endl;
    cout<<"The value of num1=num2="<<(num1=num2)<<endl;
    cout<<"The value of num1+=num2="<<(num1+=num2)<<endl;
    cout<<"The value of num1-=num2="<<(num1-=num2)<<endl;
    cout<<"The value of num1*=num2="<<(num1*=num2)<<endl;
    cout<<"The value of num1/=num2="<<(num1/=num2)<<endl;
    cout<<"The value of num1%=num2="<<(num1%=num2)<<endl;
    cout<<endl;

    cout<<"Increment and decrement operators: usrd to increase or decrease a variable's value by 1"<<endl;
    cout<<"The value of num1++="<<num1++<<endl;
    cout<<"The value of num1--="<<num1--<<endl;
    cout<<"The value of ++num1="<<++num1<<endl;
    cout<<"The value of --num1="<<--num1<<endl;

    return 0;
}