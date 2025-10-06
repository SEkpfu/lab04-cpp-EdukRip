#include <iostream>

double sum(double a, double b);
double dif(double a, double b);
double mul(double a, double b);
int main();

int main()
{
    double a, b;
    std::cin >> a >> b;
    std::cout << sum(mul(5, sum(dif(a, 2),b)),mul(1000, a)) << std::endl;
    //std::cout << 5*(a-2+b) + 1000*a;
}

double sum(double a, double b)
{
    return a + b;
}
double dif(double a, double b)
{
    return a - b;
}
double mul(double a, double b)
{
    return a * b;
} 
