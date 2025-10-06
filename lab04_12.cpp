#include <iostream>

int main();
bool fortune(int a);
bool fortune(int a1, int a2, int a3, int a4, int a5, int a6);
bool fortune(int a123, int a456);

int main()
{
    int a;
    std::cin >> a;

    if (fortune(a))
        std::cout << "Счастливый" << std::endl;
    else 
        std::cout << "Несчастливый" << std::endl;


    int a1, a2, a3, a4, a5, a6;
    std::cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;

    if (fortune(a1,a2,a3,a4,a5,a6))
        std::cout << "Счастливый" << std::endl;
    else 
        std::cout << "Несчастливый" << std::endl;


    int a123, a456;
    std::cin >> a123 >> a456;

    if (fortune(a123,a456))
        std::cout << "Счастливый" << std::endl;
    else 
        std::cout << "Несчастливый" << std::endl;
}

bool fortune(int a)
{
    return (a/100000 + a / 10000 % 10 + a / 1000 % 10) == (a / 100 % 10 + a / 10 % 10 + a % 10);
}
bool fortune(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return (a1 + a2 + a3)==(a4 + a5 + a6);
}
bool fortune(int a123, int a456)
{
    return (a123 / 100 + a123 / 10 % 10 + a123 % 10) == (a456 / 100 + a456 / 10 % 10 + a456% 10);
}
