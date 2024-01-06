#include <bits/stdc++.h>
using namespace std;

vector<int> concatenateArrays(int n, vector<int> &arrA, vector<int> &arrB)
{
    vector<int> concatenatedArray;

    // Concatenate array B followed by array A
    concatenatedArray.insert(concatenatedArray.end(), arrB.begin(), arrB.end());
    concatenatedArray.insert(concatenatedArray.end(), arrA.begin(), arrA.end());

    return concatenatedArray;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arrA(n);
    vector<int> arrB(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> arrB[i];
    }

    vector<int> result = concatenateArrays(n, arrA, arrB);

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}