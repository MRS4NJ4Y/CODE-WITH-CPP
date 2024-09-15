//************** Reference Veriables*****************
/* a reference veriables is a alias for another veriables,
    or a way to refer to a vaeriables by another name.
    Ex- sum--> add--> addition*/

#include<iostream>
using namespace std;
int main(){
    int a=10, b=15;
    int sum=a+b;
    int & add = sum;
    int & addition = add;

    cout<<sum<<endl;
    cout<<add<<endl;
    cout<<addition<<endl;

    return 0;
}