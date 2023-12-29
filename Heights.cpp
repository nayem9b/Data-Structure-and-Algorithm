#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    vector<int> maxBefore(n), maxAfter(n);

    int maxVal = -1;
    for (int i = 0; i < n; i++)
    {
        maxBefore[i] = maxVal;
        maxVal = max(maxVal, heights[i]);
    }

    maxVal = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        maxAfter[i] = maxVal;
        maxVal = max(maxVal, heights[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << maxBefore[i] << " " << maxAfter[i] << endl;
    }

    return 0;
}
