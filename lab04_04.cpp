#include <iostream>

int main();
void square(int n, int m);
void chess(int n, int m);

int main()
{
    int n, m;
    std::cin >> n >> m;

    square(n, m);

    chess(n,m);

    return 0;
}

void square(int n, int m)
{
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << " ";
            }
            for (int k = 0; k < n; k++)
            {
                std::cout << "*";
            }
            std::cout << "\n";
        }
}

void chess(int n, int m)
{
    for (int w = 0; w < n; w++)
    {
        for (int o = 0; o < m; o++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int k = 0; k < m; k++)
                {
                    std::cout << "*";
                }
                std::cout << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

}