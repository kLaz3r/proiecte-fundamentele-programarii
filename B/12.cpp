// 12. Se citeste un numar.Sa se afiseze descompunerea acestui numar in produs de factori primi

#include <bits/stdc++.h>

using namespace std;

unsigned long long descompuneInFactoriPrimi(unsigned long long n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    for (unsigned long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }

    if (n > 2)
    {
        cout << n << " ";
    }

    return 0;
}

int main()
{
    unsigned long long n;
    cout << "Introdu numarul: ";
    cin >> n;

    descompuneInFactoriPrimi(n);
    return 0;
}