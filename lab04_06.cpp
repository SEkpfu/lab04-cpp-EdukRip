#include <iostream>
#include <string>

int main();
char znak(int x);
std::string number(int x);

int main()
{
    int x;
    std::cin >> x;

    std::cout << znak(x) << number(x);
}

char znak(int x)
{
    if (x >= 0)
        return '+';
    else
        return '-';
}

std::string number(int x)
{
    if (x < 0)
        x *= -1;
    switch (x) 
    {
        case 0:
        {
            return "ноль";
            break;
        }
        case 1:
        {
            return "один";
            break;
        }
        case 2:
        {
            return "два";
            break;
        }
        case 3:
        {
            return "три";
            break;
        }
        case 4:
        {
            return "четыре";
            break;
        }
        case 5:
        {
            return "пять";
            break;
        }
        case 6:
        {
            return "шесть";
            break;
        }
        case 7:
        {
            return "семь";
            break;
        }
        case 8:
        {
            return "восемь";
            break;
        }
        case 9:
        {
            return "девять";
            break;
        }
        case 10:
        {
            return "десять";
            break;
        }
        default:
        {
            return "Число не в интервале [-10;10]";
            break;
        }
    }
}
