#include <iostream>

using namespace std;
int ways_count(int S[], int m, int n);

int main()
{
    int n;
    int S[] = { 1, 2, 5, 10, 50 };
    int coins_size = sizeof(S) / sizeof(S[0]);

    cout << "Coins = 1, 2, 5, 10, 50" << endl;
    cout << "Enter N (number) :" << endl;
    cin >> n ;

    cout << "Number of ways to make N with coins = " << ways_count(S, coins_size, n);

    return 0;
}

// Number of ways to make N with the sum of the values of the coins
int ways_count(int S[], int m, int n)
{
    // do not include any coin
    if (n == 0)
        return 1;

    // n must be greater than or equal to 1
    if (n < 0)
        return 0;


    // no solution exist
    if (m <= 0)
        return 0;

    // ways_count is sum of solutions (i)
    return ways_count(S, m - 1, n) + ways_count(S, m, n - S[m - 1]);
}
