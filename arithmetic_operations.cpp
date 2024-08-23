#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    float c = 7.3;
    float d = 4.5;
    double e = 3.9;
    double f = 6.6;

    //addition
    std::cout<<"Integer addition and substraction :\n" <<"a + b = " <<a+b <<"\n" <<"a - b = " <<a-b <<std::endl;
    std::cout<<"floating addition and substraction :\n" <<"c + d = " <<c+d <<"\n" <<"c - d = " <<c-d <<std::endl;
    std::cout<<"double addition and substraction :\n" <<"e + f = " <<e+f <<"\n" <<"e - f = " <<e-f <<std::endl;
    std::cout<<"Integer and float addition and substraction :\n" <<"a + c = " <<a+c <<"\n" <<"a - c = " <<a-c <<std::endl;
    std::cout<<"float and double addition and substraction :\n" <<"f + d = " <<f+d <<"\n" <<"f - d = " <<f-d <<std::endl;
    return 0;
}  