//********************* enum in C++ **********************************
/*
    in C++, an enum(short for "enumeration") is a user-define data type that consists of integral constants.
    each of these constants is assigned a name. by default the valie of constant start from 0 and increment by 1.
    but you can assign custom value to the constant if needed.
    Syntax:
    enum enume_name{
        constant1,
        constant2,
        constant3
    } ;
*/

#include <iostream>

enum Day {
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};

int main() {
    Day today = Wednesday;
    std::cout << "The day number is: " << today << std::endl;
    std::cout<<std::endl;

//************************Custom Values in enum****************************
/*
    You can also assign custom values to the constants within an enum:
*/
    enum Status {
    Success = 1,
    Failure = -1,
    Pending = 0
    };
    Status result = Failure;
    std::cout << "Status: " << result << std::endl;
    std::cout<<std::endl;
   
//************************Switch Case in enum*********************************
/*
    Enums are often used in switch statements to check for corresponding values:
*/
   enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
    };
    Level myVar = MEDIUM;
    switch (myVar) {
    case 1:
    std::cout<<"Low Level";
    break;
    case 2:
    std::cout<<"Medium level";
    break;
    case 3:
    std::cout<<"High level";
    break;
    }
    std::cout<<std::endl;
    std::cout<<std::endl;

//*********************typedef in enum******************************
/*
    The typedef allows you to define an alias for the enum, making the code more concise when declaring variables of that enum type.
    Syntax:
    typedef enum EnumName {
    Constant1,
    Constant2,
    Constant3
    } AliasName;
*/
    typedef enum Direction {
        NORTH,
        EAST,
        SOUTH,
        WEST
    } DirectionAlias;
    DirectionAlias myDirection = NORTH;
    if (myDirection == NORTH)
        std::cout << "Heading North!" << std::endl;

   return 0;
}
