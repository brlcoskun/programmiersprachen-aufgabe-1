#include <iostream>
//using namespace std;

int smallest_number();

int main()
{
  std::cout << "Hello, World!\n"; // n-new line

  int result = smallest_number();
  std::cout << "Smallest number is: " << result << " \n";
  return 0;
}

int smallest_number()
{
  int potential = 20;       //beginning number
  bool found_number = true; //declaring a boolean value with true

  do
  {
    found_number = true;
    for (int i = 2; i < 21; ++i)
    {
      if (potential % i != 0)
      {
        found_number = false;
        potential += 20;
      }
    }

    if (found_number == true)
    {
      return potential;
    }

  } while (!found_number);
  return -1;
}
