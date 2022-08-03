// FILENAME: 2-1.cpp
// PROGRAMMER: Maya Cobb
// DATE: 6/30/2022      
// COMPILER: Visual Studio Code Runner  
// REQUIRED: 2-1.cpp
// PURPOSE:
//    Prompt the user to enter their first name and display it
//    To implement functions and modules with the C++ environment
 
#include <iostream>         // Allows use of << and >> operators.
#include <hello_interface.h>
#include <hello_interface.cpp>

using namespace std;        // Eliminates need for std as in std::cout

// string getName();
// void displayName(string);

int main() {
    string name = getName();
    displayName(name);

    return 0;
}