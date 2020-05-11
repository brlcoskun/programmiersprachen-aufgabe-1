//Develop the functions factorially test driven. The function should assign the product of all natural numbers smaller and equal to this number to a natural number.

#include <iostream>

using namespace std;

int factorial(int num)
{

  if (num <= 1)
    return 1;
  return num * factorial(num - 1);
}

int main()
{
  int num = 0;
  cout << "Give a number: ";
  cin >> num;
  cout << factorial(num);
  return 0;
}
