//
// Created by blatantBabbage on 30/04/24.
//

/*
 * Preprocessor directive - This preprocessor directive indicates that we would like to use the contents of the iostream
 * library, which is the part of the C++ standard library that allows us to read and write text from/to the console. We
 * need this line in order to use std::cout on line 5.
 */
#include <iostream>

// every C++ program must have a main function else it will fail to link.
int main()
{
    // std::cout (stands for “character output”) and the << operator allow us to display information on the console.
    std::cout << "Hello, world!";
    //When an executable program finishes running, the program sends a value back to the operating system in order to
    // indicate whether it ran successfully or not. This particular return statement returns the value 0 to the operating
    // system, which means “everything went okay!”.
    return 0;
}
