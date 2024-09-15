#include<iostream>
using namespace std;
int main(){
    int a, b, c, i;
    cout<<"enter the value of a: \n";
    cin>>a;
    cout <<"enter the value of b: \n";
    cin>>b;
    cout<<" 1.Addition\n 2.Subtraction\n 3.multiplication\n 4.division\n 5.modulus\n";
    cout<<"choose option: ";
    cin>>i;    

    switch(i){
        case 1:{
            c=a+b;
            cout<<c;
            break;
        }
        case 2:{
            c=a-b;
            cout<<c;
            break;
        }
        case 3:{
            c=a*b;
            cout<<c;
            break;
        }
        case 4:{
            c=a/b;
            cout<<c;
            break;
        }
        case 5:{
            c=a%b;
            cout<<c;
            break;
        }
        default:{
            cout<<"invalid option please check and try again";
            break;
        }
    }

    return 0;
}