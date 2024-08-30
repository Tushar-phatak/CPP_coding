/*
   *
   **
   ***
   ****
   *****  
*/
#include <iostream>
using namespace std;
int main()
{
  int row_no = 0;  
  std::cout<<"Enter number of rows = ";
  std::cin>>row_no;
  for(int i=0;i<row_no;i++)
  {
    for(int j=0;j<row_no;j++)
     {
        if(j<=i)
        {
            std::cout<<"*";
        }
     }
    std::cout<<"\n"; 
  }
  return 0;
}