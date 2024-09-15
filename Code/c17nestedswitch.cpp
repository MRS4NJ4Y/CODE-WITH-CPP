#include<iostream>
using namespace std;

int main(){
    int course;
    cout<<" 1. Diploma in computer Science\n 2. Bachlor in Computer Application\n 3. B.sc(Computer Science)\n 4. Informaton Technology(IT)\n 5. B.tech\n";
    cout<<"choose the course name: \n";
    cin>>course;

    switch(course){
        case 1:{
            int Year;
            cout<<"1. 1st year\n 2. 2nd year\n 3. 3rd year\n";
            cout<<"choose the year: \n";
            cin>>Year;

            switch(Year){
                case 1:{
                    int Semester;
                    cout<<"1. 1st Semester\n 2. 2nd Semester\n ";
                    cout<<"choose the Semester: \n";
                    cin>>Semester;

                    switch(Semester){
                        case 1:{
                            int skills;
                            cout<<"i)C/C++\n ii)\n iii)Python\n iv)Java v)Rust\n vi)Ruby\n vii) viii) ix) x)";
                            cout<<"choose number of programming language which you know: \n";
                            cin>> skills;

                        }
                        case 2:{
                            int skills;
                            cout<<"choose number of programming laungage which you know: \n";
                            cout<<"1. 1st skills\n 2. 2nd skills; 3. 3rd skills\n";
                            cin>> skills;

                        }
                    }
                
                break;
                }
                case 2:{

                    break;
                }
                case 3:{


                    break;
                }
                        
            }

        break;
        }
        case 2:{
            
            
            break;
        }
        case 3:{


            break;
        }
        case 4:{
        

        break;
        }
        case 5:{

            break;
        
        }


    }

    return 0;
}