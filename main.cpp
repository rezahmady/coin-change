#include <iostream>

using namespace std;

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
