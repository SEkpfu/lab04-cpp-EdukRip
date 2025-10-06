#define _USE_MATH_DEFINES

#include <cmath> //Интересно почему не используется, хотя без неё не работает M_PI
#include <iostream>
#include <vector>

int main();
double f(double x);

int main()
{
    double x;
    std::cin >> x;

    std::cout << f(x) << std::endl;

    double a, b;
    std::cin >> a >> b;
    std::cout << "a) " << 12.5 + f(2) - f(4)*f(10) + f(a) - f(b) + f(a*b) << std::endl;

    int cMinus = 0;
    double maxY = 0;
    std::vector<double> X = {0,0,0,0,0,0,0};
    std::vector<double> Y = {0,0,0,0,0,0,0};
    for (int i = 0; i < 7; i++)
    {
        std::cin >> X[i];
        Y[i] = f(X[i]);
        if (Y[i] > maxY)
            maxY = Y[i];
        if (Y[i] < 0)
            cMinus += 1;
        std::cout << Y[i] << std::endl;
    }
    std::cout << "Макс Y: " << maxY << std::endl;
    std::cout << "Количество отрицательных: " << cMinus;

}

double f(double x)
{
    if (x < 0)
    {
        return (2 + (1.0/3));
    }
    else if (x < 2 * M_PI)
    {
        return x*x - 3;
    }
    else
    {
        return (1 + x*x*x)/(2*x);
    }
}