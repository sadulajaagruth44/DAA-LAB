#include <iostream>
#include <climits>
using namespace std;

int matrixChainMultiplication(int p[], int n)
{
    int m[n][n];

   
    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    for (int length = 2; length < n; length++)
    {
        for (int i = 1; i < n - length + 1; i++)
        {
            int j = i + length - 1;
            m[i][j] = INT_MAX;

           
            for (int k = i; k < j; k++)
            {
                int cost = m[i][k]
                         + m[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < m[i][j])
                    m[i][j] = cost;
            }
        }
    }

    return m[1][n - 1];
}

int main()
{
    int p[] = {10, 20, 30, 40};

    int n = sizeof(p) / sizeof(p[0]);

    cout << "Minimum number of multiplications = "
         << matrixChainMultiplication(p, n);

    return 0;
}
