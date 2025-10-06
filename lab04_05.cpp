#include <iostream>

int main();
int fact(int n);
int degree(int x, int n);

int main()
{
    int N, M;
    std::cin >> N >> M;
    
    std::cout << 1.0* fact(N) * fact(M)/fact(N+M) << std::endl;

    std::cout << degree(N,M);
}

int fact(int n)
{
    int S = 1; 
    while (n > 0)
    {
        S *= n;
        n--;
    }
    return S;
}

int degree(int x, int n)
{
    double S = 1;
    while (n > 0)
    {
        n--;
        S *= x;
    }
    return S;
}