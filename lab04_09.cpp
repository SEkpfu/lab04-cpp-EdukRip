#include <iostream>

int main();
bool f(double x, double &y);

int main()
{
    double a, b, r1, r2, r3;
    std::cin >> a >> b;

    std::cout << f(2, r1) - f(0, r2) * f(a,r3) << std::endl;
    std::cout << r1 << " " << r2 << " " << r3 << std::endl;
    std::cout << r1 - r2 * r3 << std::endl;

    std::cout << f(2*a, r1) - f(6, r2) + f(a*b, r3) << std::endl;
    std::cout << r1 << " "<< r2 << " " << r3 << std::endl;
    std::cout << r1 - r2 + r3;
}

bool f(double x, double &y)
{
    if ((x==0) || (x==1))
        return false;
    else
     {
        if (x<=2)
            y = (2*x + 1/(1-x))/(3*x);
        else if (x <= 5)
            y = 10 + 2.0/7;
        else
            y = (-3-x);
        return true;
     }
}