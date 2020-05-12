#include <iostream>

float mile_to_kilometer(float mile)
{

    return mile * 1.609344;
}

int main()
{
    float miles;
    std::cout << "Enter mile: ";
    std::cin >> miles;
    std::cout << miles << " miles = " << mile_to_kilometer(miles) << "\n";
}