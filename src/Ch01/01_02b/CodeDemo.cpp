// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream>
//this one is to include the input-output stream library

int main()
//main function should return an integer
{
    std::cout << "hello world" << std::endl;
    //std::cout is the standard output stream
    //<< is the insertion operator
    //"hello world" is the string to be printed
    //std::endl is used to insert a new line and flush the output buffer

    std::cout << std::endl << std::endl;
    //prints two additional new lines for better readability

    return 0;
    //since main returns an integer, returning 0
    //indicates that the program ended successfully
}

