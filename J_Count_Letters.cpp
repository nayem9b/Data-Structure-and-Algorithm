#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    vector<int> freq(26, 0); 
    
    for (char c : S)
    {
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] > 0)
        {
            char letter = 'a' + i;
            cout << letter << " : " << freq[i] << endl;
        }
    }

    return 0;
}
