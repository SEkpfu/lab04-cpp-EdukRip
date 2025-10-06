#include <iostream>
#include <cmath>

void uravn(double a, double b, double c, double *x1, double *x2, int *noll);
int main();

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    double x1, x2;
    int noll = 1; //0 - Нет корней, 1 - 1 Корень, 2 - 2 Корня, 3 - Бесконечное количество корней

    uravn(a, b, c, &x1, &x2, &noll);

    if (noll == 1)
        std::cout << "1 Корень: " << x1;
    if (noll == 0)
        std::cout << "Нет корней";
    if (noll == 2)
        std::cout << "2 Корня: " << x1 << " и " << x2;
    if (noll == 3)
        std::cout << "Бесконечное количество корней";
}

void uravn(double a, double b, double c, double *x1, double *x2, int *noll)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                *noll = 3;
            }
            else {
            *noll = 0;
            }
        }
        else {
        *noll = 1;
        *x1 = -c/b; //bx+c=0 => x = -c/b
        }
    }
    else {
        // x1 = (-b (+/-) sqrt(D))/2*a
        double D;
        D = b*b - 4*a*c;
        if (D == 0)
        {
            *noll = 1;
            *x1 = -b/2*a;
        }
        else if (D > 0)
        {
            *noll = 2;
            *x1 = (-b + sqrt(D))/(2*a);
            *x2 = (-b - sqrt(D))/(2*a);
        }
        else
            *noll = 0;

    }
}