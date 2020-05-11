#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

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

TEST_CASE("test_check_sum", "[check_sum]")
{

  REQUIRE(check_sum(122269) == 22);
  REQUIRE(check_sum(122268) == 21);
  REQUIRE(check_sum(100000) == 1);
  REQUIRE(check_sum(5) == 5);
  REQUIRE(check_sum(10) == 1);
}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
