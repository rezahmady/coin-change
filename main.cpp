#include <iostream>

using namespace std;
int ways_count(int coins[], int m, int n)

int main()
{
    int n;
    int coins[] = { 1, 2, 5, 10, 50 };
    int coins_size = sizeof(coins) / sizeof(coins[0]);

    cout << "Coins = 1, 2, 5, 10, 50" << endl;
    cout << "Enter N (number) :" << endl;
    cin >> n ;

    return 0;
}

int ways_count(int coins[], int m, int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
        return 0;

    if (m <= 0)
        return 0;

    return ways_count(coins, m - 1, n) + ways_count(coins, m, n - coins[m - 1]);
}
