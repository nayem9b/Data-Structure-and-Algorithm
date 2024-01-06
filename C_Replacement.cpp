#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arrA(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < arrA.size(); ++i)
    {
        if (arrA[i] > 0)
        {
            arrA[i] = 1;
        }
        if (arrA[i] < 0)
        {
            arrA[i] = 2;
        }
    }
    for (int i = 0; i < arrA.size(); i++)
    {
        cout << arrA[i] << " ";
    }

    return 0;
}