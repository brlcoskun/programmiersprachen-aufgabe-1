#include <iostream>

double mile_to_kilometer(double mile)
{

    return mile * 1.609344;
}

int main()
{
    double miles;
    std::cout << "Enter mile: ";
    std::cin >> miles;
    std::cout << miles << " miles = " << mile_to_kilometer(miles) << "\n";
}