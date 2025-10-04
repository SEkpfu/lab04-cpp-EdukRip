#include <iostream>

int main();
double srAr(double a1, double a2);
double srAr(double a1, double a2, double a3);
double srAr(double a1, double a2, double a3, double a4);

int main()
{
    std::cout << srAr(5, 34) << std::endl;
    std::cout << srAr(10, 20, 30) << std::endl;
    std::cout << srAr(45, 145, 245, 90) << std::endl;
}

double srAr(double a1, double a2)
{
    return (a1 + a2) / 2;
}
double srAr(double a1, double a2, double a3)
{
    return (a1 + a2 + a3) / 3;
}
double srAr(double a1, double a2, double a3, double a4)
{
    return (a1 + a2 + a3 + a4) / 4;
}