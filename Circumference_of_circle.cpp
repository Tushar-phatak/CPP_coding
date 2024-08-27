#include <iostream>
using namespace std;

int main()
{
    //'constant' is variable with fixed value that cannot be changed 
    const float pi = 3.143;
    double radius = 0;
    std::cout<<"Enter radius of circcle = ";
    std::cin>> radius;
    cout<<"Circumference of circle = " << 2 * pi * radius;
}