// Write a sum_multiples function that adds up all numbers from 1 to 1000, which are divisible by 3 or 5. Test the function using TDD - (e.g. by having the result calculated online)

#include <iostream>

using namespace std; // just typing it once instead of std::cout each time

void sum_multiples(int num) //
{
  int sum = 0;
  for (int i = 0; i < num; i++)
  {
    if (i % 3 == 0)
    {
      sum += i;
    }
    else if (i % 5 == 0) //else if -> in order to avoid duplicate numbers i.e 15
    {
      sum += i;
    }
  }
  cout << "The sum is:" << sum;
}

int main()
{
  int number = 1000;
  sum_multiples(number);
}