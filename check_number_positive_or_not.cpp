//programm to check number is positive or negative
#include <iostream>
using namespace std;

int main()
{
  int a;
 // std::cout<<"Enter a number\n";
  std::cin >>a;
  if(a > 0)
  {
    std::cout<<"Number is positive";
  }
  else if(a < 0)
  {
    std::cout<<"Number is negative";
  }
  else if(a == 0)
  {
    std::cout<<"Number is zero";
  }
  return 0;
}