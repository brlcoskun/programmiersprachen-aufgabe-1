//Develop functions for calculating the volume and surface area of a cylinder with TDD.

#include <iostream> //for cin and cout
#include <cmath>
using namespace std;

int main()
{

  int r, h;
  const float pi = M_PI;
  float volume;
  float surface;
  cout << " Enter the radius: ";
  cin >> r;
  cout << " Enter the height: ";
  cin >> h;
  volume = pi * r * r * h;
  surface = 2 * r * pi * h + pi * r * r;

  cout << " The volume is: " << volume << endl;

  cout << " The surface is: " << surface << endl;
  return 0;
}
