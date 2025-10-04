#include <iostream>

double tFar(double tC);
double tKel(double tC);
void tFandK(double tC, double &tF, double &tK);
int main();

int main()
{
    double tC;
    std::cin >> tC;

    std::cout << "1) " << tFar(tC) << std::endl;
    std::cout << "2) " << tKel(tC) << std::endl;
    
    double tF, tK;
    tFandK(tC, tF, tK);

    std::cout << "3) " << tF << " и " << tK;

}

double tFar(double tC)
{
    return 1.8 * tC + 32;
}

double tKel(double tC)
{
    return tC + 273;
}

void tFandK(double tC, double &tF, double &tK)
{
    tK = tC + 273;
    tF = 1.8 * tC + 32;

}
