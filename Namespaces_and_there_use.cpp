#include <iostream>
using namespace std;

namespace First_standard
{
   int age = 6;
   string standard = "First standars";
} // namespace first_standard

namespace Tenth_standard
{
   int age = 15; 
   string standard = "Tenth standars";
} // namespace Tenth_standard

namespace Twelveth_standard
{
   int age = 17; 
   string standard = "twelveth standars";
} // namespace Twelveth_standard

int main()
{
   cout<<First_standard::standard <<" = " <<First_standard::age <<std::endl;
   cout<<Tenth_standard::standard << " = " <<Tenth_standard::age <<std::endl;
   cout<<Twelveth_standard::standard << " = " <<Twelveth_standard::age <<std::endl;
   return 0;
}

