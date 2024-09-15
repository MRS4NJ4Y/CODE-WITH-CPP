#include<iostream>
using namespace std;

int main(){
    int run;
    cout<<"Enter the Current Run: ";
    cin>>run;

    if(run<=100){
        int boll;;
        cout<<"total boll left: ";
        cin>>boll;

        if(boll<10){
            cout<<"Aus Won";
        }
        else if (boll==10){
            cout<<"Match Draw";
        }
        else{
            cout<<"Ind Won";
        }
    }
    
    else if(run==100){
        int boll;
        cout<<"total boll left: ";
        cin>>boll;

        if(boll==0){
            cout<<"Aus Won";
        }
        else if (boll==1){
            cout<<"match Draw";
        }
        else{
            cout<<"Ind Won";
        }
    }
    else{
        cout<<"Ind Won";
    }

    return 0;
}