#include <iostream>
#include <cmath>

double R(double x1, double y1, double x2, double y2);
double S(double a, double b, double c);
int main();

int main()
{
    double x1, x2, y1, y2;
    std::cout << "Первая точка: ";
    std::cin >> x1 >> y1;
    std::cout << "Вторая точка: ";
    std::cin >> x2 >> y2;

    std::cout << "a) " << R(x1, y1, x2, y2) << std::endl;
    std::cout << "b) " << R(x1, y1, 0, 0) << " и " << R(x2, y2, 0,0) << std::endl;

    double x3, y3;
    std::cout << "Третья точка: ";
    std::cin >> x3 >> y3;

    std::cout << "c) " << S(R(x1, y1, x2, y2), R(x1, y1, x3, y3),R(x3, y3, x2, y2));

    double x4, y4;
    std::cout << "Четвёртая точка: " << std::endl;
    std::cin >> x4 >> y4;

    double pl;

    if (R(x1, y1, x2, y2) >= R(x1, y1, x3, y3))
    {
        if (R(x1, y1, x2, y2) >= R(x1, y1, x4, y4))
        {
            pl = S(R(x1, y1, x4, y4), R(x1, y1, x3, y3),R(x3, y3, x4, y4)) + S(R(x2, y2, x4, y4), R(x2, y2, x3, y3),R(x3, y3, x4, y4));
        }
        else {
            pl = S(R(x1, y1, x2, y2), R(x1, y1, x3, y3),R(x3, y3, x2, y2)) + S(R(x2, y2, x4, y4), R(x2, y2, x3, y3),R(x3, y3, x4, y4));
        }
    }
    else {
        if (R(x1, y1, x3, y3) >= R(x1, y1, x4, y4))
            {
                pl = S(R(x1, y1, x4, y4), R(x1, y1, x2, y2),R(x2, y2, x4, y4)) + S(R(x2, y2, x4, y4), R(x2, y2, x3, y3),R(x3, y3, x4, y4));
            }
        else {
                pl = S(R(x1, y1, x2, y2), R(x1, y1, x3, y3),R(x3, y3, x2, y2)) + S(R(x2, y2, x4, y4), R(x2, y2, x3, y3),R(x3, y3, x4, y4));
            }
    }
    std::cout <<  pl;
}

double R(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

double S(double a, double b, double c)
{
    double p = (a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}