#define  _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int main();
double square(double a, double h);
double square(double a, double b, float angle);
double square(double a, double b, double c);

int main()
{
    int n;
    double S;
    std::cout << "Выберите способ для поиска площади треугольника" << "\n1. По стороне и опущенной на нее высоте" << "\n2. По двум сторонам и углу между ними" << "\n3. По трем сторонам" << std::endl;
    std::cin >> n;

    switch (n) {
        case 1:
        {
            double a, h;
            std::cout << "Введите сторону и высоту: ";
            std::cin >> a >> h;
            S = square(a,h);
            break;
        }
        case 2:
        {
            double a, b;
            float angle;
            std::cout << "Введите 2 стороны и угл: ";
            std::cin >> a >> b >> angle;
            S = square(a,b,angle);
            break;
        }
        case 3:
        {
            double a, b, c;
            std::cout << "Введите 3 стороны: ";
            std::cin >> a >> b >> c;
            S = square(a,b,c);
            break;
        }
        default:
        {
            break;
        }
    }

    std::cout << "Площадь треугольника: " << S;
}

double square(double a, double h)
{
    return a*h*0.5;
}
double square(double a, double b, float angle)
{
    return 0.5*a*b*sin(angle*(M_PI/180));
}
double square(double a, double b, double c)
{
    double p = (a+b+c)*0.5;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
