#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, amount;

    cout << "Enter number of coins: ";
    cin >> n;

    int coins[n];

    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << "Enter amount: ";
    cin >> amount;

    int dp[n + 1][amount + 1];

    // Initialization
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (int j = 1; j <= amount; j++)
    {
        dp[0][j] = amount + 1;
    }

    // Fill DP table
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (coins[i - 1] <= j)
            {
                dp[i][j] = min(
                    dp[i - 1][j],
                    1 + dp[i][j - coins[i - 1]]
                );
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Display DP table
    cout << "\nDP Table:\n\n";

    cout << "Coin\\Amount\t";
    for (int j = 0; j <= amount; j++)
        cout << j << "\t";
    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            cout << "0\t\t";
        else
            cout << coins[i - 1] << "\t\t";

        for (int j = 0; j <= amount; j++)
        {
            if (dp[i][j] == amount + 1)
                cout << "-\t";
            else
                cout << dp[i][j] << "\t";
        }

        cout << endl;
    }

    // Minimum number of coins
    cout << "\nMinimum number of coins = "
         << dp[n][amount];

    // Find selected coins
    cout << "\nSelected coins: ";

    int i = n;
    int j = amount;

    while (j > 0 && i > 0)
    {
        if (coins[i - 1] <= j &&
            dp[i][j] == 1 + dp[i][j - coins[i - 1]])
        {
            cout << coins[i - 1] << " ";
            j = j - coins[i - 1];
        }
        else
        {
            i--;
        }
    }

    return 0;
}
