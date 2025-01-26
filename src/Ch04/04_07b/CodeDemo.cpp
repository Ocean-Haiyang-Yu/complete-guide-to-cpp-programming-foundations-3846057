// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(1.0, -2.1));
    points.push_back(std::complex<double>(-5.3, 6.0));
    points.push_back(std::complex<double>(7.2, 8.0));

    std::cout << points.begin()->real() <<std::endl;
    std::cout << points[1].imag()<<std::endl;
    std::cout << prev(points.end(), 2)->real()<<std::endl;
    std::cout << (points.end() - 1)->imag()<<std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
