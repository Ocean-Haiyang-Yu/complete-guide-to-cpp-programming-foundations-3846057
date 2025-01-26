// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"};

    checkpoints.push_back("Cave");
    checkpoints.push_back("Final");

    std::cout<< checkpoints.size()<<std::endl;
    std::cout<< checkpoints[2]<<std::endl;
    checkpoints[2] = "Dark Castle";
    std::cout<< checkpoints[2]<<std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
