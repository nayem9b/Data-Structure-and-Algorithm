#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        istringstream iss(s);
        string S, X;
        iss >> S >> X;

        sort(S.begin(), S.end());
        sort(X.begin(), X.end());

        if (S == X)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
