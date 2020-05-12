#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd(int a, int b)
{
  if (a == 0 || b == 0) // OR
  {
    return 0; // Intercepted input
  }

  a = abs(a);
  b = abs(b);
  int gcd;
  int min = std::min(a, b);
  for (int x = 1; x <= min; x++)
  {
    if (a % x == 0 && b % x == 0)
    {
      gcd = x;
    }
  }
  return gcd;
}

TEST_CASE("describe_gcd", "[gcd]")
{
  REQUIRE(gcd(5, 0) == 0);
  REQUIRE(gcd(10, -5) == 5);
  REQUIRE(gcd(-1, 1) == 1);
  REQUIRE(gcd(40, 60) == 20);
}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
