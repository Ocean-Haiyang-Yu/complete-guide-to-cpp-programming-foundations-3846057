// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
        std::string racer1 = "Speedy";
    std::string racer2 = "Lightning";
    std::string raceResult;

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    raceResult = "And the winner is " + racer1;

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
