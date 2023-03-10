// 24. Parcurgerea unei matrici in spirala (incepand din coltul stanga sus)

#include <iostream>

using namespace std;

void spirala(int a[][5], int m, int n)
{
    int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            cout << a[k][i] << " ";
        }
        k++;

        for (i = k; i < m; ++i)
        {
            cout << a[i][n - 1] << " ";
        }
        n--;

        if (k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }

        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}

int main()
{
    int a[5][5] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20},
                   {21, 22, 23, 24, 25}};
    int m = 5, n = 5;

    spirala(a, m, n);

    return 0;
}