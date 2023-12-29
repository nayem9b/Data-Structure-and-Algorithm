#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << i;
    }
    cout << endl;

    for (int i = 2; i <= n - 1; ++i)
    {
        cout << i;
        for (int j = 1; j < n - 1; j++)
        {
            cout << " ";
        }
        cout << n - i + 1;
        cout << endl;
    }

    for (int i = n; i >= 1; --i)
    {
        cout << i;
    }
}

int main()
{
    int num;
    cin >> num;
    if (num == 1)
    {
        cout << 1;
    }
    else
    {
        printPattern(num);
    }

    return 0;
}
