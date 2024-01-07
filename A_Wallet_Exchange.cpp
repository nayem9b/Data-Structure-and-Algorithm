#include <iostream>

using namespace std;

string winner(int a, int b)
{
    // If both wallets have an odd or even number of coins,
    // the player with the larger number of coins wins.
    if ((a + b) % 2 == 0)
    {
        return (a > b) ? "Alice" : "Bob";
    }
    // If both wallets have different parity of coins,
    // the player with the smaller number of coins wins.
    else
    {
        return (a < b) ? "Alice" : "Bob";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << winner(a, b) << endl;
    }

    return 0;
}
