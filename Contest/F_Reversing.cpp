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
    int left = 0, right = arrA.size() - 1;
    while (left < right)
    {
        int tmp = arrA[left];
        arrA[left] = arrA[right];
        arrA[right] = tmp;
        left++;
        right--;
    }
    for (int i = 0; i < arrA.size(); ++i)
    {
        cout << arrA[i] << " ";
    }
    return 0;
}