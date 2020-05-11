#include <iostream>

int check_sum(int matrikelnum)
{
  int sum = 0;
  while (matrikelnum != 0)
  {
    sum += matrikelnum % 10;
    matrikelnum /= 10;
  }

  return sum;
}

int main()
{
  std::cout << check_sum(12269) << "\n";
  return 0;
}