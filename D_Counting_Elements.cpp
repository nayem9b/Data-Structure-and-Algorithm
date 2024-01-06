#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int> &arr)
{
    int count = 0;
    bool exists;

    for (int i = 0; i < arr.size(); ++i)
    {
        exists = false;

        for (int j = 0; j < arr.size(); ++j)
        {
            if (i != j && arr[j] == arr[i] + 1)
            {
                exists = true;
                break;
            }
        }

        if (exists)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int result = countElements(arr);
    cout << result << endl;

    return 0;
}
